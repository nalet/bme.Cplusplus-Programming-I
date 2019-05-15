#include <math.h>
#include <iostream>
#include "circle.h"

Circle::~Circle()
{
    std::cout << "Circle destructor called" <<std::endl;
}

double Circle::getArea()
{
    return this->d1*M_PI*M_PI;
}

double Circle::getCircumference()
{
    return this->d1*2*M_PI;
}
