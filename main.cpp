
#include "Square.h"
#include "Triangle.h"
#include <iostream>
#include "Circle.h"
using namespace std;
using namespace student1;
void test();
/*
 * Question1: Fix the code and compile it */

int main() {
	/****************************************************/
	/*DO NOT CHANGE any line of code in this function */
	

	Circle circle(3);
	double circleCircumference1 = circle.calculateCircumference();
	circle.setR(5);
	double circleCircumference2 = circle.calculateCircumference();
	double circleArea = circle.calculateArea();
	
	
	/****************************************************/
	test();
	return 0;
}

void test() {
     int a = 30;
	 const Circle  circle1(30);
	
	 ///const Circle* circle1 = new Circle(30);
	
	/* Question2: Block the changing r of above object not other objects only above object.*/

	///circle1.setR(20); //This line must show compile error.
   double circumference =  circle1.calculateCircumference() ;
	circle1.getR();

	/*DO NOT REMOVE below code block*/
	{
		 Circle circle2(30);
		circle2.setR(20);
		double circumference2 = circle2.calculateCircumference();
		circle2.getR();
		Square a(5, 6);
		double b = a.calculateArea();
		cout << b << endl;
	}
	/*End of code block*/

	Circle circle4(5);
	circle4.setR(10);
	Circle circle5(10);
	/* Question3: In Circle class, create an equals function which returns boolean to compare circle4 and circle5 objects
	 * and print if they are equal or not. */
	if (circle5.isequal(circle4, circle5)==1) {
		cout << "Circle 5 is equal to Circle4" << endl;
	}
	else
		cout << "Circle 5 is not equal to Circle4" << endl;

	
	 /* Question4: Review the PI variable and make it unchangeable from anywhere of that program.
	  * You know PI is always 22/7 */

	  /* Question5: Overload the setR method of Circle class to take integer values */

}

/*
 * Question6: Review the code and fix the bugs
 */

