#include<iostream>
#include "Circle.h"
namespace student1{


	Circle::Circle(double r) {
		setR(r);
	}
	Circle::Circle(int r) {
		setR(r);
	}
	Circle::~Circle() {
	}

	void Circle::setR(double r) {
		this->r = r;
	}

	void Circle::setR(int r) {
		this->r = r;
	}

	 double Circle::getR() const {
		
		return r;
	}

	 double Circle::calculateCircumference() const {
		return PI* r* 2;
	}

	double Circle::calculateArea() {
		return PI * r * r;
	}
	bool Circle::isequal(const Circle& c, Circle& a) {
		if (c.r == a.r)
			/// Take address of c to get a pointer which can be compared to this
			return 1;
		else
			return 0;
	}
	}
