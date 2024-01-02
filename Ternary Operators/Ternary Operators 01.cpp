#include <iostream>
#include <string>

static int sLevel = 1;
static int sSpeed = 2;

int main()
{
	// standard if statement
	if (sLevel > 5)
		sSpeed = 10;
	else
		sSpeed = 5;
	// can be re-written using ternary operators (conditional assignment)

	sSpeed = sLevel > 5 ? 10 : 5;       // if sLevel is greater than 5, assign 10 to sSpeed, otherwise, 5   ':' "otherwise" 

}