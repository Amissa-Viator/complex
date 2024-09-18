#include <iostream>
#include <cmath>
#include "complex.h"

Complex Complex::operator+(const Complex& other) const {
	return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator*(const Complex& other) const {
	return Complex(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}

Complex Complex::operator-(const Complex& other) const {
	return Complex(real + other.real, imaginary - other.imaginary);
}

Complex Complex::operator/(const Complex& other) const {
	double denominator = pow(other.real, 2) + pow(other.imaginary, 2);
	return Complex((real * other.real + imaginary * other.imaginary) / denominator, -(real * other.imaginary - imaginary * other.real) / denominator);
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
	out << complex.real << complex.imaginary << "i";
	return out;
}

std::istream& operator>>(std::istream& in, Complex& complex) {
	in >> complex.real >> complex.imaginary;
	return in;
}