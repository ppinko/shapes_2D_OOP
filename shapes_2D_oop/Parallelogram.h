#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "ClosedShape.h"

#include <iostream>
#include <cmath>

class Parallelogram : public ClosedShape
{
    public:
        Parallelogram();
        Parallelogram(double base, double side, double angle);
        virtual ~Parallelogram();

        virtual void get_area() const override;
        virtual void get_perimeter() const override;
        virtual void get_representation() const override;
    private:
        double base;
        double side;
        double angle;
};

#endif // PARALLELOGRAM_H
