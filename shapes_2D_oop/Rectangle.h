#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ClosedShape.h"

class Rectangle : public ClosedShape
{
    public:
        Rectangle(){};
        virtual ~Rectangle(){};

        virtual void get_area() const override;
        virtual void get_perimeter() const override;
    private:
};

#endif // RECTANGLE_H
