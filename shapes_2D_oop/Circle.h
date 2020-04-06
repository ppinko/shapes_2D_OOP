#ifndef CIRCLE_H
#define CIRCLE_H

#include "ClosedShape.h"

#include <iostream>
#include <cmath>

class Circle : public ClosedShape
{
    public:
        Circle();
        Circle(double radius);
        virtual ~Circle();

        virtual void get_area() const override;
        virtual void get_perimeter() const override;
    private:
        double radius;
};

#endif // CIRCLE_H
