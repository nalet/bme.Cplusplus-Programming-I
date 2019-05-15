#include "shape.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle final : public Shape
{
private:
    int d1,d2;
public:
    Triangle(int d1, int d2) : Shape("Triangle"), d1(d1), d2(d2) {}
    ~Triangle();
    double getArea();
    double getCircumference();
};

#endif // TRIANGLE_H
