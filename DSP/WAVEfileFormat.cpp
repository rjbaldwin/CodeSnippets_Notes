#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

// created by Robert J Baldwin | 27/02/2024
// Another WAV file data demonstration.  REF:  https://www.youtube.com/watch?v=rHqkeLxAsTc


using namespace std;

// RIFF chunk
const string chunkID{ "RIFF" };
const string chunkSize{ "----" };
const string format{ "WAVE" };

// FMT  sub-chunk
const string subchunk_1_ID{ "fmt " };
const int subchunk_1_size{ 16 };  // needs to be 4 bytes for helper function casts int to this -> see function below or video 27:20
const int audioFormat{ 1 };
const int numChannels{ 2 };
const int sampleRate{ 44100 };
const int byteRate{ sampleRate * numChannels * (subchunk_1_size / 8) };
const int blockAlign{ numChannels * (subchunk_1_size / 8) };
const int bitsPerSample{ 16 };

// Data sub chunk
const string subChunk_2_ID{ "data" };
const string subChunk_2_size{ "----" };


//===========================================

const int duration{ 2 };
const int maxAmplitude{ 32760 };  // 2^16bit = 65,536 / 2 - 1 = 32767 (divide by 2 as this contains both positive and negative values)
const double frequency{ 250.0 };
const double PI{ 3.14159265358979323846 };
//===========================================


// helper function

void writeAsBytes(ofstream& file, int value, int byteSize)
{
	file.write(reinterpret_cast<const char*>(&value), byteSize);
}

//===========================================


int main()
{
	ofstream wav;
	wav.open("test.wav", ios::binary);

	if (wav.is_open())
	{
		// Writing the header to file
		wav << chunkID;
		wav << chunkSize;
		wav << format;
		
		wav << subchunk_1_ID;
		writeAsBytes(wav, subchunk_1_size, 4);
		writeAsBytes(wav, audioFormat, 2);
		writeAsBytes(wav, numChannels, 2);
		writeAsBytes(wav, sampleRate,4);
		writeAsBytes(wav, byteRate, 4);
		writeAsBytes(wav, blockAlign, 2);
		writeAsBytes(wav, bitsPerSample, 2);

		wav << subChunk_2_ID;
		wav << subChunk_2_size;

		// Get position in output sequence.  Returns the position 
		// of the current character in the output stream.
		// In other words, this makes sure the DSP data comes after the header info

		int startAudio = wav.tellp();	// acts like a marker to the end of the current data at this point. 

		// Writing the DSP to file

		for (int i = 0; i < sampleRate * duration; ++i)
		{
			double amplitude = (double)i / sampleRate * maxAmplitude;
			double value = std::sin((2 * PI * i * frequency) / sampleRate);

			double channel_1 = amplitude * value / 2;
			double channel_2 = (maxAmplitude - amplitude) * value;

			writeAsBytes(wav, channel_1, 2);
			writeAsBytes(wav, channel_2, 2);

		}

		int endAudio = wav.tellp();

		wav.seekp(startAudio - 4);  // goes to a location in a file

		writeAsBytes(wav, endAudio - startAudio, 4);

		wav.seekp(4, ios::beg);

		writeAsBytes(wav, endAudio - 8, 4);

	}

	wav.close();

}