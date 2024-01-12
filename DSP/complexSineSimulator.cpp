//
// Calculates complex sine values to demonstrate the help me learn the maths
// created by R J Baldwin 12/01/2024

#include <iostream>
#include <complex>
#include <cmath>


#ifndef M_PI
#define M_PI 3.14159265358979323846264338327950288
#endif

double wt(double sineFrequency, double index, double sampleRate)
{
	double t = index / sampleRate;
	double sum = 2 * M_PI * sineFrequency * t;
	return sum;
}

void cartesianToPolar(const std::complex<double>& z)
{
	double magnitude = std::abs(z);
	double angle = std::arg(z);

	std::cout << "Polar Form: (" << magnitude << ", " << angle << ")\n\n";
}

void complexSine(double sineFrequency, double index, double sampleRate)
{
	double t = index / sampleRate;
	double wt = 2 * M_PI * sineFrequency * t;

	const std::complex<double> i(0.0, 1.0);
	const double e = 2.718281828459045;
	

	std::complex<double> result = std::exp(i * wt);
	std::cout << result << '\n';

	cartesianToPolar(result);
}



int main()
{
	const double sampleRate{ 100 };
	const double sineFrequency{ 10 };

	for (int i = 0; i <= 2; ++i)
	{
		complexSine(sineFrequency, i, sampleRate);
	}
	

}

