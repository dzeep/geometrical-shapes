#include <iostream>
#include "Square.h"
using namespace std;
Square::Square(double a, double b) {

	setA(a);
	setB(b);
}
 Square::~Square() {
}

void Square::setA(double a) {
	this->a = a;
}

void Square::setB(double b) {
	this->b = b;
}

double Square::calculateCircumference() {
	return (a + b) * 2;
}

double Square::calculateArea() {
	return a * b;
}
