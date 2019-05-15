#include <string>

#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
private:
    std::string type;
public:
    Shape(std::string type) : type(type) {}
    virtual ~Shape();
    virtual double getArea() = 0;
    virtual double getCircumference() = 0;
    void report();
};

#endif // SHAPE_H
