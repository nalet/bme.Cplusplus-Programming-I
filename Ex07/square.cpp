#include <iostream>
#include "square.h"

Square::~Square()
{
    std::cout << "Square destructor called" << std::endl;
}

double Square::getArea()
{
    return this->d1*this->d1;
}

double Square::getCircumference()
{
    return this->d1*4;
}
