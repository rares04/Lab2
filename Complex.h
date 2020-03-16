#pragma once
#include <iostream>
class Complex {
private:
	double real, imag;

public:
	
	// Constructor
	Complex(double real, double imag);

	// Returns the value of the real part of the complex number
	double getReal() const;

	// Returns the value of the imaginary part of the complex number
	double getImag() const;

	// Changes the value of the real part of the complex number
	void setReal(double real);

	// Changes the value of the imaginary part of the complex number
	void setImag(double imag);

	// Prints the complex number
	void show_compl() const;

	// Prints the complx number in exponential form
	void show_exp() const;

	// Add two complex numbers and returns the result
	Complex add(Complex nr) const;

	// Multiplies two complex numbers and returns the result
	Complex mult(Complex nr) const;

	// Divides two complex numbers and returns the result
	Complex quot(Complex nr) const;

	// Returns the absolute value of a complex number
	double abs() const;

	// Transforms the complex number in it's polar form
	void compute_polar();

	/* Overloads the operator <<
	friend std::ostream& operator<< (std::ostream& out, Complex& c);*/
};