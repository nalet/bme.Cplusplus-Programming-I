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
    double doubleNumber = 1.99;
    printType(doubleNumber); // −> Type is double
    std::string stringValue = "asdf";
    printType(stringValue); // −> Type is string
}

void doubleNumber(int& num)
{
    num = num * 2;
}

int addNumbers(int num1, int num2, int num3, int num4)
{
    return num1 + num2 + num3 + num4;
}

void printType(int var)
{
    std::cout << "The passed variable of type int has the value " << var << std::endl;
}

void printType(float var)
{
    std::cout << "The passed variable of type float has the value " << var << std::endl;
}

void printType(double var)
{
    std::cout << "The passed variable of type double has the value " << var << std::endl;
}

void printType(string var)
{
    std::cout << "The passed variable of type string has the value " << var << std::endl;
}
