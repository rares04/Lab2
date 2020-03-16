#pragma once
#include <iostream>
using namespace std;

class Rational {
private:
    int numarator, numitor;

public:
    //Constructor
    Rational(int numarator, int numitor);

    // Returns the value of the real part of the rational number
    int getNumarator() const;

    // Returns the value of the imaginary part of the rational number
    int getNumitor() const;

    // Changes the value of the real part of the rational number
    void setNumarator(int numarator);

    // Changes the value of the imaginary part of the rational number
    void setNumitor(int numitor);

    // Prints the rational number
    void show_ratio() const;

    // Add two rational numbers and returns the result
    Rational add(Rational nr) const;

    // Multiplies two rational numbers and returns the result
    Rational mult(Rational nr) const;

    // Divides two rational numbers and returns the result
    Rational quot(Rational nr) const;

    // Returns the absolute value of a rational number
    int abs() const;

    // Makes the rational number ireductible
    void ired();
};