#include "I_ShapeArea.h"
#include "I_Perimeter.h"
#include "ClosedShape.h"
#include "Rectangle.h"
#include "Square.h"

#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    ClosedShape *ptr_1 = new Rectangle(5, 10);
    ClosedShape *ptr_2 = new Square(8);

    std::vector<ClosedShape *> shapes {ptr_1, ptr_2};
    for (const auto shape : shapes){
        shape->get_area();
        shape->get_perimeter();
        std::cout << "---------------\n";
    }

    delete ptr_1;
    delete ptr_2;

    return 0;
}
