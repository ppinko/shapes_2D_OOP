#ifndef SQUARE_H
#define SQUARE_H

#include "ClosedShape.h"

#include <iostream>

class Square : public ClosedShape
{
    public:
        Square();
        Square(double s);
        virtual ~Square();

        virtual void get_area() const override;
        virtual void get_perimeter() const override;
    private:
        double side;
};

#endif // SQUARE_H
