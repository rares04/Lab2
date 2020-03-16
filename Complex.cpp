#include "Complex.h"
#include <iostream>
#include <complex>

/*std::ostream& operator << (std::ostream& out, const Complex& c)
{
	out << std::endl;
	c.show_compl();
	return out;
}*/

// Constructor, initalizes the values for the real and imaginary part of the number
Complex::Complex(double real, double imag) {
	this->real = real;
	this->imag = imag;
}

// Returns the value of the real part of the complex number
double Complex::getReal() const {
	return this->real;
}

// Returns the value of the imaginary part of the complex number
double Complex::getImag() const {
	return this->imag;
}

// Changes the value of the real part of the complex number
void Complex::setReal(double real) {
	this->real = real;
}

// Changes the value of the imaginary part of the complex number
void Complex::setImag(double imag) {
	this->imag = imag;
}

// Prints the complex number
void Complex::show_compl() const {
	if (this->getImag() >= 0.0) // If the imaginary part is postive output like this 
		std::cout << this->getReal() << "+" << this->getImag() << "i";
	else // If the imaginary part is negative output like this 
		std::cout << this->getReal() << this->getImag() << "i";
}

// Prints the complx number in exponential form
void Complex::show_exp() const {
	double fi;  

	fi = atan (this->getImag() / this->getReal());

	std::cout << "The complex number ";
	this->show_compl();
	std::cout <<" in exponential form is: " << this->abs() << "*e^(" << fi << "*i)";
}

// Add two complex numbers and returns the result
Complex Complex::add(Complex nr) const {
	double new_real, new_imag;
	
	new_real = this->getReal() + nr.getReal();
	new_imag = this->getImag() + nr.getImag();

	return Complex(new_real, new_imag);
}

// Multiplies two complex numbers and returns the result
Complex Complex::mult(Complex nr) const {
	double new_real, new_imag;

	// The real part consists from the the real parts multiplied subtracted with the imaginary parts multiplied
	new_real = (this->getReal() * nr.getReal()) - (this->getImag() * nr.getImag());
	// The imaginary part consists from multiplying in cross the real and imaginary parts with each other
	new_imag = (this->getReal() * nr.getImag()) + (this->getImag() * nr.getReal());

	return Complex(new_real, new_imag);
}

// Divides two complex numbers and returns the result
Complex Complex::quot(Complex nr) const {
	double new_real, new_imag, nenner;

	Complex conj(nr.getReal(), -nr.getImag());  // The conjugate will be used to get the "Zahler" by 
	Complex zahler = this->mult(conj);          // multiplying the first number with the conjugate of the second number
	nenner = nr.abs() * nr.abs();  // The "Nenner is actually norm * norm

	// New number is formed by splitting the number 
	new_real = zahler.getReal() / nenner;
	new_imag = zahler.getImag() / nenner;

	return Complex(new_real, new_imag);
}

// Returns the absolute value of a complex number
double Complex::abs() const {
	double abs_real, abs_imag;
	
	abs_real = this->getReal() * this->getReal();
	abs_imag = this->getImag() * this->getImag();

	return sqrt(abs_real + abs_imag);
}

// Transforms the complex number in it's polar form
void Complex::compute_polar() {
	double abs, fi;

	abs = this->abs();
	fi = atan(this->getImag() / this->getReal());

	std::cout << "The complex number ";
	this->show_compl();
	std::cout << " in trigonometrical form is : " << abs << "(cos(" << fi << ") + isin(" << fi <<"))" << std::endl;
}


