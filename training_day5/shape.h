#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
    Shape();
    virtual ~Shape();
    virtual double area() const = 0;
};

#endif // SHAPE_H
