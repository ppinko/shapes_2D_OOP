#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle {0.0, 0.0} {}

Rectangle::Rectangle(double b, double h) : base{b}, height{h} {}

Rectangle::~Rectangle(){}

void Rectangle::get_area() const {
    double area = base * height;
    std::cout << "The area of the given rectangle equals: " << area << std::endl;
}

void Rectangle::get_perimeter() const {
    double perimeter = 2 * base + 2 * height;
    std::cout << "The perimeter of the given rectangle equals: " << perimeter << std::endl;
}

void Rectangle::get_representation() const {
    std::cout << "Rectangle dimensions (base x height) = " << base << " x "
        << height << std::endl;
}
