#define PI 3.14159265

#include "Parallelogram.h"

Parallelogram::Parallelogram()
    : Parallelogram{0.0, 0.0, 0.0} {}

Parallelogram::Parallelogram(double b, double s, double a)
    : base{b}, side{s}, angle{a} {}

Parallelogram::~Parallelogram(){}

void Parallelogram::get_area() const {
    double area = base * side * std::sin(angle * PI / 180);
    std::cout << "The area of the given parallelogram equals: " << area << std::endl;
}

void Parallelogram::get_perimeter() const {
    double perimeter = 2 * base + 2 * side;
    std::cout << "The perimeter of the given parallelogram equals: " << perimeter << std::endl;
}

void Parallelogram::get_representation() const {
    std::cout << "Parallelogram dimensions (base x side x angle) = " << base << " x "
        << side << " x " << angle << "deg" << std::endl;
}

