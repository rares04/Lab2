#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational(int numarator, int numitor) {
    if(numitor == 0)
        throw exception();
    this->numarator = numarator;
    this->numitor = numitor;

}
int Rational::getNumarator() const {
    return this->numarator;
}

int Rational::getNumitor() const {
    return this->numitor;
}

void Rational::setNumarator(int numarator) {
    this->numarator = numarator;
}

void Rational::setNumitor(int numitor) {
    this->numitor = numitor;
}

// Prints the rational number
void Rational::show_ratio() const {
    std::cout << this->getNumarator()<< "/"<< this->getNumitor();
}

// Add two rational numbers and returns the result
Rational Rational::add(Rational nr) const {
    int new_numarator, new_numitor;
    new_numarator = this->getNumarator() * nr.getNumitor() + this->getNumitor() * nr.getNumarator();
    new_numitor = this->getNumitor() * nr.getNumitor();

    Rational new_rational = Rational(new_numarator, new_numitor);
    new_rational.ired();

    return new_rational;
}

// Multiplies two rational numbers and returns the result
Rational Rational::mult(Rational nr) const {
    int new_numarator, new_numitor;
    new_numarator = this->getNumarator() * nr.getNumarator();
    new_numitor = this->getNumitor() * nr.getNumitor();

    Rational new_rational = Rational(new_numarator, new_numitor);
    new_rational.ired();

    return new_rational;
}

// Divides two rational numbers and returns the result
Rational Rational::quot(Rational nr) const {
    int new_numarator, new_numitor;
    new_numarator = this->getNumarator() * nr.getNumitor();
    new_numitor = this->getNumitor() * nr.getNumarator();

    Rational new_rational = Rational(new_numarator, new_numitor);
    new_rational.ired();
    return new_rational;

}

// Returns the absolute value of a rational number
int Rational::abs() const {
    int abs_ratio;
    abs_ratio = this->getNumarator() / this->getNumitor();
    if(abs_ratio >= 0)
        return abs_ratio;
    else
        return -abs_ratio;
}

// Returns cmmdc of 2 numbers
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Makes the rational number ireductible
void Rational::ired() {
    int gcd_value = gcd(this->getNumarator(), this->getNumitor());
    if(gcd_value != 1 && gcd_value != -1) {
        this->setNumarator(this->getNumarator()/gcd_value);
        this->setNumitor(this->getNumitor()/gcd_value);
    }

}