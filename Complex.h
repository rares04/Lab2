#pragma once

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

};