#include "Square.h"

Square::Square() : Square {0.0} {}

Square::Square(double s) : side{s} {}

Square::~Square(){}

void Square::get_area() const {
    double area = side * side;
    std::cout << "The area of the given Square equals: " << area << std::endl;
}

void Square::get_perimeter() const {
    double perimeter = 4 * side;
    std::cout << "The perimeter of the given Square equals: " << perimeter << std::endl;
}
