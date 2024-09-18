#include <iostream>
#include "complex.h"

int main()
{
	Complex number_one;
	Complex number_two;

	std::cout << "Note: please input numbers like this: real imaginary" << std::endl;
	std::cout << "Enter first complex number: ";
	std::cin >> number_one;
	std::cout << "Enter second complex number: ";
	std::cin >> number_two;

	Complex sum = number_one + number_two;
	Complex difference = number_one - number_two;
	Complex product = number_one * number_two;
	Complex division = number_one / number_two;

	std::cout << "\nResults of operations: " << std::endl;
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Difference: " << difference << std::endl;
	std::cout << "Product: " << product << std::endl;
	std::cout << "Quotient: " << division << std::endl;

	system("pause");
	return 0;
}


