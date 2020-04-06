#ifndef CLOSEDSHAPE_H
#define CLOSEDSHAPE_H

#include "I_ShapeArea.h"
#include "I_Perimeter.h"

class ClosedShape :
    public I_ShapeArea, public I_Perimeter
{
    public:
        virtual ~ClosedShape();
};

#endif // CLOSEDSHAPE_H
