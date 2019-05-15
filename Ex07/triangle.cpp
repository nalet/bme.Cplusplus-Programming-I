#include <iostream>
#include <cmath>
#include "triangle.h"

Triangle::~Triangle()
{
    std::cout << "Triangle destructor called" << std::endl;
}

double Triangle::getArea()
{
    return this->d1*this->d2*0.5;
}

double Triangle::getCircumference()
{
    return 2 *  std::sqrt(std::pow(this->d1/2.0,2) + std::pow(this->d2,2)) + static_cast<double>(this->d1);
}
