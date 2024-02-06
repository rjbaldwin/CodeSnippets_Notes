//
// Evaluating transfer functions with test signals to show 
// frequency and phase responses of 1st order feed forward filter.  
// created by R J Baldwin 12/01/2024



#include <iostream>
#include <complex>
#include <cmath>



constexpr double M_PI{ 3.14159265358979323846264338327950288 };
constexpr std::complex<double> i(0.0, 1.0);

void cartesianToPolar(const std::complex<double>& z)
{
	double magnitude = std::abs(z);
	//double angle = std::arg(z);
    double angle = std::atan2(std::imag(z), std::real(z));
    double angleDeg = angle * 180.0 / M_PI;

	std::cout << "Polar Form: (" << magnitude << ", " << angle << ",  " << angleDeg <<" degrees)\n\n";
}


void filterResponse(double testSignal)
{
    double t = 1.0;  // Assuming a specific value for t
    double w = testSignal;  // Assuming a specific value for w
    double a0 = 0.5;
    double a1 = 0.5;

    const std::complex<double> i(0.0, 1.0);

    // Compute the exponential term
    std::complex<double> expTerm = std::exp(-i * w * t);

    // Calculate H(w)
    std::complex<double> Hw = a0 + a1 * expTerm;

    // Print the result
    std::cout << Hw << '\n';

    cartesianToPolar(Hw);
}


int main()
{
    std::cout << "DC 0Hz \n";
	filterResponse(0.0);

    std::cout << "Nyquist pi \n";
    filterResponse(M_PI);

    std::cout << "1/2 Nyquist \n";
    filterResponse(M_PI/2);

    std::cout << "1/4 Nyquist \n";
    filterResponse(M_PI/4);


}