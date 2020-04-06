#include "I_ShapeArea.h"
#include "I_Perimeter.h"
#include "ClosedShape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Triangle.h"
#include "Circle.h"

#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    ClosedShape *ptr_1 = new Rectangle(5, 10);
    ClosedShape *ptr_2 = new Square(8);
    ClosedShape *ptr_3 = new Parallelogram(5, 10, 30);
    ClosedShape *ptr_4 = new Triangle(3, 4, 90);
    ClosedShape *ptr_5 = new Circle(10);

    std::vector<ClosedShape *> shapes {ptr_1, ptr_2, ptr_3, ptr_4, ptr_5};
    for (const auto shape : shapes){
        shape->get_area();
        shape->get_perimeter();
        std::cout << "---------------\n";
    }

    delete ptr_1;
    delete ptr_2;

    return 0;
}
