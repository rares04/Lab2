#include "Rational.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Tests the operations: add, multiply, divide for rational numbers
void test_operationen() {
    Rational r = Rational(2, 3);
    Rational r2 = Rational(5, -7);

    Rational add = r.add(r2);
    assert(add.getNumarator() == 1 && add.getNumitor() == -21);

    Rational mult = r.mult(r2);
    assert(mult.getNumarator() == 10 && mult.getNumitor() == -21);

    Rational quot = r.quot(r2);
    assert(quot.getNumarator() == -14 && quot.getNumitor() == 15);
}

void test_abs() {
    Rational r = Rational(6, 3);
    Rational r2 = Rational(-6, -3);

    assert(r.abs() == 2);
    assert(r2.abs() == 2);
}

void test_ired() {
    Rational r = Rational(8, 28);
    r.ired();
    assert(r.getNumarator() == 2 && r.getNumitor() == 7);

    Rational r2 = Rational(10, 50);
    r2.ired();
    assert(r2.getNumarator() == 1 && r2.getNumitor() == 5);
}

int main() {
    test_operationen();
    test_ired();


    Rational r1 = Rational(1, 2);
    Rational r2 = Rational(-5, 6);
    Rational r3 = Rational(-1, -2);
    Rational r4 = Rational(7, 8);
    Rational r5 = Rational(0, 10);
    Rational r6 = Rational(2, 6);
    Rational r7 = Rational(-4, -4);

    // Reihe von Objekte von Typ Rational gespeichert durch einen Vector Container aus <vector> library
    vector<Rational> Reihe = { r1, r2, r3, r4, r5, r6, r7 };

    // 7. Berechnen Sie (in main) die Gesamtsumme der Reihe.
    Rational summe = r1;  // Amfangssumme: Rational number with inital values r1
    for (std::vector<Rational>::size_type i = 1; i != Reihe.size(); i++) {
        summe = summe.add(Reihe[i]);
    }

    // Printing the final sum of all complex numbers from the container
    cout << "\nDie Gesamtsumme der Reihe ist: ";
    summe.show_ratio();
    cout << endl << endl;
}
