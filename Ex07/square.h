#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H


class Square : public Shape
{
private:
    int d1;
public:
    Square(int d1) : Shape("Triangle"), d1(d1) {}
    ~Square();
    double getArea();
    double getCircumference();
};

#endif // SQUARE_H
