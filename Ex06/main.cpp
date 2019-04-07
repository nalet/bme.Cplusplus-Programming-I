#include <iostream>
#include "ex2_1.h"
#include "ex2_2.h"
#include "ex2_3.h"
#include "ex2_4.h"

int main()
{
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "///               BME - C++ I - EXERCISE 6                  ///" << std::endl;
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << std::endl;
    std::cout << "***************************************************************" << std::endl;
    std::cout << "***                       2.1 - ATM                         ***" << std::endl;
    std::cout << "***************************************************************" << std::endl;
    ex2_1();
    std::cout << std::endl;
    std::cout << "***************************************************************" << std::endl;
    std::cout << "***                  2.2 - Code Snippets                    ***" << std::endl;
    std::cout << "***************************************************************" << std::endl;
    ex2_2();
    std::cout << std::endl;
    std::cout << "***************************************************************" << std::endl;
    std::cout << "***          2.3 - Order of Construction & Destruction      ***" << std::endl;
    std::cout << "***************************************************************" << std::endl;
    ex2_3::test();
    std::cout << std::endl;
    std::cout << "***************************************************************" << std::endl;
    std::cout << "***                2.4 - Access Specifiers                  ***" << std::endl;
    std::cout << "***************************************************************" << std::endl;
    ex2_4::test();
    std::cout << std::endl;
    return 0;
}
