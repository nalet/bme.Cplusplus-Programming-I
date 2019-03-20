#include <iostream>
#include "ex3_1.h"
#include "ex3_2.h"

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
    ex3_1();
    std::cout << std::endl;
    std::cout << "***************************************************************" << std::endl;
    std::cout << "***                       Pitfalls                          ***" << std::endl;
    std::cout << "***************************************************************" << std::endl;
    ex3_2();
    return 0;
}
