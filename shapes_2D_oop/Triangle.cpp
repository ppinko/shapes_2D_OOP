#include "Triangle.h"

#define PI 3.14159265

Triangle::Triangle()
    : Triangle{0.0, 0.0, 0.0} {}

Triangle::Triangle(double b, double s, double a)
    : base{b}, side{s}, angle{a} {}

Triangle::~Triangle(){}

void Triangle::get_area() const {
    double area = 0.5 * base * side * std::sin(angle * PI / 180);
    std::cout << "The area of the given triangle equals: " << area << std::endl;
}

void Triangle::get_perimeter() const {
    // using Carnot rule to calculate third side of the triangle
    double missing_side = std::sqrt( base * base + side * side
        - 2 * base * side * std::cos(angle * PI / 180) );
    double perimeter = base + side + missing_side;
    std::cout << "The perimeter of the given triangle equals: " << perimeter << std::endl;
}

void Triangle::get_representation() const {
    std::cout << "Parallelogram dimensions (base x side x angle) = " << base << " x "
        << side << " x " << angle << "deg" << std::endl;
}
