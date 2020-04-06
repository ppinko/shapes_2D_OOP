#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "ClosedShape.h"

#include <iostream>
#include <cmath>

class Triangle : public ClosedShape
{
    public:
        Triangle();
        Triangle(double base, double side, double angle);
        virtual ~Triangle();

        virtual void get_area() const override;
        virtual void get_perimeter() const override;
    private:
        double base;
        double side;
        double angle;
};

#endif // TRIANGLE_H
