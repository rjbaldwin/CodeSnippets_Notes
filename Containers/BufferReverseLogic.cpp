// figuring out logic to reverse audio buffers using concatenation	 etc
// 27/02/2024

#include <iostream>
#include <vector>
#include <algorithm>


void reverseAndAppend(std::vector<int>& source, std::vector<int>& destination)
{
	// Reverse the source buffer
	std::reverse(source.begin(), source.end());

	// Append the reversed buffer to the destination
	destination.insert(destination.begin(), source.begin(), source.end());
}



int main()
{

	// Data reprisenting incoming audio buffers

	std::vector<int> buffer1{ 1,2,3,4 };
	std::vector<int> buffer2{ 5,6,7,8 };
	std::vector<int> buffer3{ 9,10,11,12 };

	// Destination audio block
	std::vector<int> reversedAudioBlock;

	// Reverse and append each buffer

	reverseAndAppend(buffer1, reversedAudioBlock);
	reverseAndAppend(buffer2, reversedAudioBlock);
	reverseAndAppend(buffer3, reversedAudioBlock);

	std::cout << "Reversed audio data stream: \n";

	for (int sample : reversedAudioBlock)
	{
		std::cout << sample << " ";
	}





}