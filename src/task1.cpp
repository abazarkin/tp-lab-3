#include "Circle.h"


double calcDelta(){
	double rad = 6378100.0;
	Circle rope(rad);
	rope.setFerence(rope.getFerence() + 1.0);
	return rope.getRadius - rad;
}

double calcCost(){
	double rad = 3.0;
	Circle pool(rad);
	Circle fence(rad + 1.0);
	return (fence.getArea() - pool.getArea()) * 1000 + fence.getFerence() * 2000;
}
