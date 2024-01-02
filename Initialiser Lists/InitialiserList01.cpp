// Demonstration of initialiser list usage
// Created by robert j baldwin 25/05/2023

#include <iostream>
#include <initializer_list>
#include <string>

class Excrement
{
public:
	Excrement() = default;

	Excrement(int s, std::string t)
		:mSize{ s },
		mTexture{ t } {};

	Excrement(std::initializer_list<int> sizes, std::initializer_list<std::string> textures)
	{
		if (sizes.size() > 0 && textures.size() > 0)
		{
			mSize = *sizes.begin();
			mTexture = *textures.begin();
		}
	}


private:
	int mSize{};
	std::string mTexture{};	
};


int main()
{
	Excrement theBristolStool{ {12},{"smooth"}};

}


