#ifndef SQUARE_H
#define SQUARE_H

#include "ClosedShape.h"

#include <iostream>

class Square : public ClosedShape
{
    public:
        Square();
        Square(double b);
        virtual ~Square();

        virtual void get_area() const override;
        virtual void get_perimeter() const override;
        virtual void get_representation() const override;
    private:
        double base;
};

#endif // SQUARE_H
