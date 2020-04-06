#ifndef SQUARE_H
#define SQUARE_H

#include "ClosedShape.h"

class Square : public ClosedShape
{
    public:
        Square(){};
        virtual ~Square(){};

        virtual void get_area() const override;
        virtual void get_perimeter() const override;

    private:

};

#endif // SQUARE_H
