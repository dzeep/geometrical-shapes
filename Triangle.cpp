/*
 * Triangle.cpp
 *
 *  Created on: 8 Kas 2018
 *      Author: ykartal
 */
#include <iostream>
#include "Triangle.h"
using namespace std;
Triangle::Triangle(double a, double b, double c) {
	if (a + b > c && a + c > b && b + c > a)
	{
		setA(a);
		setB(b);
		setC(c);
	}
	else
		cout << "that values can not be triangle" << endl;
}

Triangle::~Triangle() {

}

void Triangle::setA(double a) {
	this->a = a;
}

void Triangle::setB(double) {
	this->b = b;
}

void Triangle::setC(double) {
	this->c = c;
}

double Triangle::calculateCircumference() {
	return a + b + c ;
}

