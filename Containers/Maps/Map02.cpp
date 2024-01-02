// demonstration of map - created by r j baldwin 17/07/2023
// pg 777 of ppp using cpp 

#include <iostream>
#include <map>
#include <string>





int main()

{ 


	std::map<std::string, int> words;
	for
		(std::string s; std::cin >> s;)
		++words[s];

	for (const auto& p : words)
	{
		std::cout << p.first << "; " << p.second << '\n';
	}


}