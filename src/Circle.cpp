//
// Created by Илья Соловьёв on 04.11.2019.
//

#include "Circle.h"
#define M_PI 3.14

Circle::Circle(double radius) {
    this->radius = radius;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * radius * radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * radius * radius;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    this->radius = ference / M_PI / 2;
    this->area = this->radius * this->radius * M_PI;
}

void Circle::setArea(double area) {
    this->area = area;
    this->radius = sqrt(area / M_PI);
    this->ference = 2 * M_PI * this->radius;
}

double Circle::getRadius() {
    return this->radius;
}

double Circle::getFerence() {
    return round(this->ference *1000)/1000;
}

double Circle::getArea() {
    return round(this->area*1000)/1000;
}
