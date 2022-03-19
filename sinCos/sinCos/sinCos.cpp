
#include "Header.h"

int main()
{
	double angleInDegrees;
	

	angleInDegrees = checkString(getString());

	std::cout << "The angle in degrees is: " << angleInDegrees << std::endl;

	std::cout << "the angle in radians is: " << getRadian(angleInDegrees) << std::endl;

	std::cout << "the cosine of theta is: " << cosine(getRadian(angleInDegrees)) << std::endl;

	std::cout << "the sine of theta is: " << sine(getRadian(angleInDegrees)) << std::endl;

}