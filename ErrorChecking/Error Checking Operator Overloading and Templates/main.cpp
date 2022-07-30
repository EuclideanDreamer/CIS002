#include <iostream>
#include "Frac.h"

int main() {
	double x, y, i, j;
	while(true) {
		try {
			std::cout << "Please enter two numbers for a fraction seperated by a space: ";
			std::cin >> x;
			std::cin >> y;
			if (y == 0) {
				throw y;
			}
			else {
				Frac<double> frac(x, y);
				std::cout << "Please enter two numbers for a fraction seperated by a space: ";
				std::cin >> i;
				std::cin >> j;
				if (j == 0) {
					throw j;
				}
				else
				{
					Frac<double> frac2(i, j);
					frac = frac2 * frac;
					std::cout << "Your Fraction is " << frac.a / frac.b << std::endl;
				}
			}

		}
		catch (double) {
			std::cout << "Cannot divide by 0!" << std::endl;
		}
	}
	return 0;
}