#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle {0.0, 0.0} {}

Rectangle::Rectangle(double b, double h) : bottom{b}, height{h} {}

Rectangle::~Rectangle(){}

void Rectangle::get_area() const {
    double area = bottom * height;
    std::cout << "The area of the given rectangle equals: " << area << std::endl;
}

void Rectangle::get_perimeter() const {
    double perimeter = 2 * bottom + 2 * height;
    std::cout << "The perimeter of the given rectangle equals: " << perimeter << std::endl;
}
