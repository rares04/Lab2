#include "Complex.h"
#include <iostream>
#include <cassert>
#include <vector> 
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;


// Tests the operations: add, multiply, divide for complex numbers
void test_operationen() {
	Complex c = Complex(2.0, 3.0);
	Complex c2 = Complex(5.0, -7.0);

	Complex add = c.add(c2);
	assert(add.getReal() == 7 && add.getImag() == -4);

	Complex mult = c.mult(c2);
	assert(mult.getReal() == 31 && mult.getImag() == 1);

	Complex quot = c.quot(c2);
	assert(quot.getReal() == -11.0 / 74.0);
	assert(quot.getImag() == 29.0 / 74.0);
}	

// Tests the function which returns the norm of a complex number
void test_abs() {
	Complex c = Complex(4.0, 3.0);
	Complex c2 = Complex(7.0, 2.0);

	assert(c.abs() == 5.0);
	assert(c2.abs() == sqrt(53.0));
}	


// Tests the output of the Polar form and Exponential form
void test_polar() {
	Complex c = Complex(4.0, 3.0);
	c.show_exp();
	cout << endl;
	c.compute_polar();
}

// Bool function used to sort the container by norm  of the complex numbers
bool sort_condition(Complex comp1, Complex comp2) { return (comp1.abs() < comp2.abs()); }

int main() {

	// Testen der Methoden
	test_operationen();
	test_abs();
	test_polar();

	// 5. Erstellen Sie (in main) eine Reihe der Objekte vom Typ-Complex.
	Complex c1 = Complex(1.0, 2.0);
	Complex c2 = Complex(-5.0, 6.0);
	Complex c3 = Complex(-1.0, -2.0);
	Complex c4 = Complex(7.0, 8.0);
	Complex c5 = Complex(0.0, 10.0);
	Complex c6 = Complex(2.0, 0.0);
	Complex c7 = Complex(-4.0, -4.0);
	
	// Reihe von Objekte von Typ Complex gespeichert durch einen Vector Container aus <vector> library
	vector<Complex> Reihe = { c1, c2, c3, c4, c5, c6, c7 };

	// 6. Sortieren Sie (in main) die Reihe nach dem Betrag.
	sort(Reihe.begin(), Reihe.end(), sort_condition);  // Sorting by norm, function sort_condition assess the values of two norms
	cout << "\nDie sortierte Reihe von complexe Zahlen nach Betrag ist: \n";
	// Printing the container with Complex numbers
	for (std::vector<Complex>::size_type i = 0; i != Reihe.size(); i++) {
		cout << i << ". ";
		Reihe[i].show_compl();
		cout << endl;
	}

	// 7. Berechnen Sie (in main) die Gesamtsumme der Reihe.
	Complex summe = Complex(0.0, 0.0);  // Amfangssumme: Complex number with inital values 0
	for (std::vector<Complex>::size_type i = 0; i != Reihe.size(); i++) {
		summe = summe.add(Reihe[i]);
	}
	
	// Printing the final sum of all complex numbers from the container
	cout << "\nDie Gesamtsumme der Reihe ist: ";
	summe.show_compl();
	cout << endl << endl;
}