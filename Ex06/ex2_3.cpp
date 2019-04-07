#include "ex2_3.h"
#include <iostream>

void ex2_3::test()
{
    std::cout << "What’s the general rule for the order of construction and      " << std::endl;
    std::cout << "destruction?                                                   " << std::endl;
    std::cout << "Base constructor, Derived constructor, Derived destructor      " << std::endl;
    std::cout << "Base destructor                                                " << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "create ABC in stack" << std::endl;
    ABC test;
    std::cout << "create ABC in heap" << std::endl;
    ABC *testpointer = new ABC();
    std::cout << "delete ABC in heap" << std::endl;
    delete testpointer;
    std::cout << "leave test()" << std::endl;
}
