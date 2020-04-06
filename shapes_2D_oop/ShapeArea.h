#ifndef SHAPEAREA_H
#define SHAPEAREA_H


class ShapeArea
{
    public:
        ShapeArea();
        virtual ~ShapeArea();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // SHAPEAREA_H
