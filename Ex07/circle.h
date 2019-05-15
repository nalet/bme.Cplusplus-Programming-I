#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H


class Circle : public Shape
{
private:
    int d1;
public:
    Circle(int d1) : Shape("Triangle"), d1(d1) {}
    ~Circle();
    double getArea();
    double getCircumference();
};

#endif // CIRCLE_H
