#include <iostream>
#include "shape.h"

Shape::~Shape()
{
    std::cout << "Shape destructor called" << std::endl;
}

void Shape::report()
{
    std::cout << this->type << " has area: " << this->getArea();
    std::cout << " and circumference: " << this->getCircumference() << std::endl;
}
