#pragma once


class Circle{
	private:
		double radius,
			   ference,
			   area;
	public:
		Circle(double);
		void setRadius(double),
			 setFerence(double),
			 setArea(double);
		double getRadius(),
			   getFerence(),
			   getArea();
};
