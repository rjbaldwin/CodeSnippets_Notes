#include <iostream>
#include <vector>

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


}