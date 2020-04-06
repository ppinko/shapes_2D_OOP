#ifndef I_SHAPEAREA_H
#define I_SHAPEAREA_H


class I_ShapeArea
{
    public:
        virtual void get_area() const = 0;
        virtual ~I_ShapeArea(){};
};

#endif // I_SHAPEAREA_H
