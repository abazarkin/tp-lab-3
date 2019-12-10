#include "Circle.h"
#include "math.h"
#define pi 3.1415	


Circle::Circle(double radius_){
	Circle::setRadius(radius_);
}

void Circle::setRadius(double radius_){
	radius = radius_;
	ference = 2 * pi * radius_;
	area = pi * radius_ * radius_;
}

void Circle::setFerence(double ference_){
	radius = ference_ / 2 / pi;
	ference = ference_;
	area = pi * radius * radius;
}

void Circle::setArea(double area_){
	radius = sqrt(area_ / pi);
	ference = 2 * pi * radius;
	area = area_;
}

double Circle::getRadius(){
	return radius;
}

double Circle::getFerence(){
	return ference;
}

double Circle::getArea(){
	return area;
}
