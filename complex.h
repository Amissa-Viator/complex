#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
	double real;
	double imaginary;
public:
	Complex() {
		real = 0.0;
		imaginary = 0.0;
	}
	Complex(double real, double imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}
	Complex(const Complex& other) {
		real = other.real;
		imaginary = other.imaginary;
	}
	~Complex() {};
	Complex operator+(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	Complex operator-(const Complex& other) const;
	Complex operator/(const Complex& other) const;
	friend std::ostream& operator<<(std::ostream& out, const Complex& complex);
	friend std::istream& operator>>(std::istream& in, Complex& complex);
};


#endif // !COMPLEX_H

