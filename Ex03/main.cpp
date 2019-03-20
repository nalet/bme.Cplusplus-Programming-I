#include <iostream>
#include "ex2_1.h"
#include "ex2_2.h"

using namespace std;

int main()
{
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "///               BME - C++ I - EXERCISE 3                  ///" << std::endl;
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << std::endl;
    std::cout << "***************************************************************" << std::endl;
    std::cout << "***            Allocating and Freeing Memory                ***" << std::endl;
    std::cout << "***************************************************************" << std::endl;
    ex2_1();
    std::cout << std::endl;
    std::cout << "***************************************************************" << std::endl;
    std::cout << "***                       Pitfalls                          ***" << std::endl;
    std::cout << "***************************************************************" << std::endl;
    ex2_2();
    return 0;
}
