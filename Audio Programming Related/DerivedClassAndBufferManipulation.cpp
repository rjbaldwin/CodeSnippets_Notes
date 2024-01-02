#include <iostream>
#include <vector>
#include <algorithm>


// simplification of the audio block and derived class structure within JUCE for learning and testing purposes.
// NOTE:  This is an incredibly simplified version I have made for my own contextualisation 


class Base
{

public:

	Base() = default;
	Base(std::vector<float>& buffer) :mBuffer{ &buffer } {}

	virtual void renderBlock()
	{
		int multiplier{ 10 };

		for(int i = 0; i<mBuffer->size();++i)
		{
			(*mBuffer)[i] *= multiplier;
		}
	}



protected:
	std::vector<float>* mBuffer;
	
};

//==============================================================

class Derived : public Base
{
public:
	using Base::Base;

	void renderBlock() override
	{
		
		int multiplier{ 52  };

		for (int i = 0; i < mBuffer->size(); ++i)
		{
			(*mBuffer)[i] *= multiplier;
		}
	}

private:
	
};

//==============================================================

const void printVect(std::vector<float>& v)
{
	for (const auto elem : v)
	{
		std::cout << "data: " << elem << '\n';
	}
}

//==============================================================

// this copies the audio buffer into a new vector and reverses.  I dont want to manipulate the original data in this case. 

void reverseAudioBuffer(const std::vector<float> source, std::vector<float>& dest)
{
	std::reverse_copy(std::begin(source), std::end(source), std::begin(dest));
}

//==============================================================

int main()
{
	std::vector<float> audioBufferexternal{ 10,20,30,40,50 };

	Base base{ audioBufferexternal };

	base.renderBlock();
	printVect(audioBufferexternal);

	std::cout << '\n';

	

	Derived deriv{ audioBufferexternal };
	deriv.renderBlock();
	printVect(audioBufferexternal);

	std::cout << "Reversed Data \n";

	// make the new vector the same size as the main audio buffer vector
	std::vector<float> reversedData(audioBufferexternal.size());

	// reverse and copy the data to the new buffer
	reverseAudioBuffer(audioBufferexternal, reversedData);

	printVect(reversedData);

}