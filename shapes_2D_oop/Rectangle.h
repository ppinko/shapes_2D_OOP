#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ClosedShape.h"

#include <iostream>

class Rectangle : public ClosedShape
{
    public:
        Rectangle();
        Rectangle(double b, double h);
        virtual ~Rectangle();

        virtual void get_area() const override;
        virtual void get_perimeter() const override;
        virtual void get_representation() const override;
    private:
        double base;
        double height;
};

#endif // RECTANGLE_H
