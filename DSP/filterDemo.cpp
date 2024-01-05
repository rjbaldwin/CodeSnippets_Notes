
// Digital filter maths
// Created by R J Baldwin 05/01/2024

#include <iostream>
#include <vector>



void firstOrderFeedForwardFilter(std::vector<float>& x)
{
	// first order feed-forward filter

	// y[n] = a0*x[n] + a1 * x[n-1]
	// 
	// coefficients
	const float a0{ 0.5 };
	const float a1{ 0.5 };
	// output vector y
	std::vector<float>y(x.size());
	for (auto n = 0; n < x.size(); ++n)
	{
		if (n == 0) {
			// For the first element of y, since x[-1] is not defined, consider it as 0
			y[n] = a0 * x[n];
		}
		else {
			y[n] = a0 * x[n] + a1 * x[n - 1];
		}
		
		std::cout << y[n] << '\n';
	}
}

void firstOrderFeedbackFilter(std::vector<float>& x)
{
	// 1st order feedback filter
	
	// y[n] = a0*x[n] - b1*y[n-1]
	// coefficients
	const float a0{ 0.5 };
	const float b1{ 0.5 };  // experiment with these
	// output vector y
	std::vector<float>y(x.size());

	for (auto n = 0; n < x.size(); ++n)
	{
		if (n == 0) {
			// For the first element of y, since x[-1] is not defined, consider it as 0
			y[n] = a0 * x[n];
		}
		else {
			y[n] = a0 * x[n] - b1 * y[n - 1];
		}

		std::cout << y[n] << '\n';
	}

}

int main()
{
	// 1st order feed forward filter
	std::cout << "*** 1ST ORDER FEED FORWARD FILTER ***\n";

	// dc test signal
	std::vector<float>dc{ 0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0 };
	
	std::cout << "DC\n ";
	firstOrderFeedForwardFilter(dc);
	std::cout << "\n**************************\n";

	// nyquist test signal
	std::vector<float>nyquist{ 0,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1 };

	std::cout << "Nyquist\n ";
	firstOrderFeedForwardFilter(nyquist);
	std::cout << "\n**************************\n";

	// 1/2 nyquist test signal
	std::vector<float>halfNyquist{ 0,1,0,-1,0,1,0,-1,0,1,0,-1,0,1,0,-1,0,1,0,-1,0,1,0,-1,0 };

	std::cout << "1/2 Nyquist\n ";
	firstOrderFeedForwardFilter(halfNyquist);
	std::cout << "\n**************************\n";

	// 1/4 nyquist test signal
	std::vector<float>qNyquist{ 0,0.707,1,0.707,0,-0.707,-1,-0.707,0,0.707,1,0.707,0,-0.707,-1,-0.707,0,0.707,1,0.707,0,-0.707,-1,-0.707,0,0.707,1,0.707,0,-0.707,-1,-0.707,0 };

	std::cout << "1/4 Nyquist\n ";
	firstOrderFeedForwardFilter(qNyquist);
	std::cout << "\n**************************\n";

	// Impulse test signal
	std::vector<float>impulse{ 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

	std::cout << "Impulse\n ";
	firstOrderFeedForwardFilter(impulse);
	std::cout << "\n**************************\n";

	std::cout << "*** 1ST ORDER FEEDBACK FILTER ***\n";

	// dc test signal
	std::cout << "DC\n ";
	firstOrderFeedbackFilter(dc);
	std::cout << "\n**************************\n";

	// nyquist test signal
	std::cout << "Nyquist\n ";
	firstOrderFeedbackFilter(nyquist);
	std::cout << "\n**************************\n";

	// 1/2 nyquist test signal
	std::cout << " 1/2 Nyquist\n ";
	firstOrderFeedbackFilter(halfNyquist);
	std::cout << "\n**************************\n";

	// 1/4 nyquist test signal
	std::cout << " 1/4 Nyquist\n ";
	firstOrderFeedbackFilter(qNyquist);
	std::cout << "\n**************************\n";

	// Impulse test signal
	std::cout << " Impulse\n ";
	firstOrderFeedbackFilter(impulse);
	std::cout << "\n**************************\n";


	
	// sine wave test signal 
	std::vector<float>sine{ 0, 0.174, 0.342, 0.5, 0.643, 0.766, 0.866, 0.939, 0.985, 1, 0.985, 0.939, 0.866, 0.766, 0.643, 0.5, 0.342, 0.174, 0, -0.174, -0.342, -0.5, -0.643, -0.766, -0.866, -0.939, -0.985, -1, -0.985, -0.939, -0.866, -0.766, -0.643, -0.5, -0.342, -0.174, 0 };

	std::cout << "Sine feed forward\n";
	firstOrderFeedForwardFilter(sine);
	std::cout << "\n**************************\n";
	std::cout << "Sine feedback\n";

	firstOrderFeedbackFilter(sine);
	std::cout << "\n**************************\n";

}

