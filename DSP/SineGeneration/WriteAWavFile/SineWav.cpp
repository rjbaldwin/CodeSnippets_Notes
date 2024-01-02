#include<iostream>
#include<fstream>
#include<cmath>

const double PI{ 3.14159265358979323846 };
const int sampleRate{ 44100 };
const int bitDepth{ 16 };


class SineOscillator
{
public:
	SineOscillator(float freq, float amp) : mFrequency{ freq }, mAmplitude{amp}
	{
		mOffset = 2 * PI * mFrequency / sampleRate;
	}

	double process()
	{
		auto sample = mAmplitude * sin(mAngle);
		mAngle += mOffset ;
		return sample;
		// A sin(2pif/sr)
	}


private:
	float mFrequency{};
	float mAmplitude{};
	float mAngle{ 0.0f };
	float mOffset{ 0.0f };
};



void writeToFile(std::ofstream& file, int value, int size)
{
	file.write(reinterpret_cast<const char*>(&value), size);
}



int main()
{
	SineOscillator sineOsc{440,0.5};

	int duration = 2;
	std::ofstream audioFile;
	audioFile.open("waveform.wav", std::ios::binary);

	//======================================================
	
	// header chunk - refer to https://docs.fileformat.com/audio/wav/

	audioFile << "RIFF";	// Marks the file as a riff file. Characters are each 1 byte long.
	audioFile << "----";	// Size of the overall file - 8 bytes, in bytes (32-bit integer). Typically, you’d fill this in after creation. (currently unknown)
	audioFile << "WAVE";	// File Type Header. For our purposes, it always equals “WAVE”.
	// format chunk
	audioFile << "fmt ";	// Format chunk marker. Includes trailing null
	writeToFile(audioFile, 16, 4);	// Length of format data as listed above
	writeToFile(audioFile, 1, 2);	// Compression code
	writeToFile(audioFile, 1, 2);	// Number of channels
	writeToFile(audioFile, sampleRate, 4);	// Sample rate
	writeToFile(audioFile, sampleRate * bitDepth / 8, 4);	// Byte rate
	writeToFile(audioFile, bitDepth / 8, 2);	// Block align
	writeToFile(audioFile, bitDepth, 2);	// Bit depth

	// Data chunk

	audioFile << "data";
	audioFile << "----";

	int preAudioPosition = audioFile.tellp();

	//======================================================
	auto maxAmplitude{ pow(2,bitDepth - 1) };

	for (int i = 0; i < sampleRate * duration; ++i)
	{
		auto sample = sineOsc.process();
		int intSample = static_cast<int> (sample * maxAmplitude);

		writeToFile(audioFile, intSample, 2);
	}

	int postAudioPosition = audioFile.tellp();

	audioFile.seekp(preAudioPosition - 4);
	writeToFile(audioFile, postAudioPosition - preAudioPosition, 4);

	audioFile.seekp(4, std::ios::beg);
	writeToFile(audioFile, postAudioPosition - 8, 4);


	audioFile.close();



}