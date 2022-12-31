#ifndef CIRCLE_H_
#define CIRCLE_H_
namespace student1 {
	
		class Circle {
		public:
			Circle(double);
			Circle(int);
			virtual ~Circle();
			void setR(double);
			void setR(int);
			double getR() const;
			double calculateCircumference() const;
			double calculateArea();
			bool isequal(const Circle& c, Circle& a);
		private:
			double r;
        const double PI = 3.14;

		};
	}
#endif /* CIRCLE_H_ */