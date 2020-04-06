#include "Square.h"

Square::Square() : Square {0.0} {}

Square::Square(double b) : base{b} {}

Square::~Square(){}

void Square::get_area() const {
    double area = base * base;
    std::cout << "The area of the given square equals: " << area << std::endl;
}

void Square::get_perimeter() const {
    double perimeter = 4 * base;
    std::cout << "The perimeter of the given square equals: " << perimeter << std::endl;
}

void Square::get_representation() const {
    std::cout << "Square dimensions (base x height) = " << base << " x "
        << base << std::endl;
}
