#include "ex2_4.h"
#include <iostream>

void ex2_4::test()
{
    std::cout << "There are two solutions - which one is preferable and why      " << std::endl;
    std::cout << "Access Levels and Scope. With Scope set to private, one can    " << std::endl;
    std::cout << "access a class more granular, using public access methods.     " << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "create C" << std::endl;
    C testC;
    std::cout << "leave test()" << std::endl;
}
