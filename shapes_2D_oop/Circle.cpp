#define PI 3.14159265

#include "Circle.h"

Circle::Circle()
    : Circle{0.0} {}

Circle::Circle(double r)
    : radius{r} {}

Circle::~Circle(){}

void Circle::get_area() const {
    double area = PI * radius * radius;
    std::cout << "The area of the given circle equals: " << area << std::endl;
}

void Circle::get_perimeter() const {
    double perimeter = 2 * PI * radius;
    std::cout << "The perimeter of the given circle equals: " << perimeter << std::endl;
}

void Circle::get_representation() const {
    std::cout << "Circle dimension radius = " << radius << std::endl;
}
