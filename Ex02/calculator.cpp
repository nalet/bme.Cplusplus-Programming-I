#include <iostream>
#include "calculator.h"

using namespace std;

void ex2_functions()
{
    int num = 35;
    doubleNumber(num); //Should print 70
    std::cout << "Pass-by-Value & Pass-by-Reference output: " << num << std::endl;
    std::cout << "Default Values output: " << std::endl;
    std::cout << "Call: addNumbers(1, 2, 3, 4);    Output: " << addNumbers(1,2,3,4) << std::endl;
    std::cout << "Call: addNumbers(1, 2, 3);       Output: " << addNumbers(1,2,3) << std::endl;
    std::cout << "Call: addNumbers(1, 2);          Output: " << addNumbers(1,2) << std::endl;
    std::cout << "Call: addNumbers(1);             Output: " << addNumbers(1) << std::endl;
    std::cout << "Call: addNumbers();              Output: " << addNumbers() << std::endl;

    std::cout << "Function Overloading output: " << std::endl;
    int intNumber = 42;
    printType(intNumber); // −> Type is int
    float floatNumber = 1.666f;
    printType(floatNumber); // −> Type is float
}

void doubleNumber(int& num)
{
    num = num * 2;
}

int addNumbers(int num1, int num2, int num3, int num4)
{
    return num1 + num2 + num3 + num4;
}

void printType(int num)
{
    std::cout << "The passed number of type int has the value " << num << std::endl;
}

void printType(float num)
{
    std::cout << "The passed number of type float has the value " << num << std::endl;
}
