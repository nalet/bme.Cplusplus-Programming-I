#include <iostream>
#include "stack.h"

int main()
{
    // BUG: couldn't compile, because "string" is not included in stack.h header file
    // NOTE: specialization to handle strings with pop() function could also just defined as "template<> string Stack<string>::pop(){...}"
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "///               BME - C++ I - EXERCISE 8                  ///" << std::endl;
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << std::endl;
    std::cout << "-----------------------stack string test-----------------------" << std::endl;
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    Stack<std::string, 10> string_stack;
    for (unsigned long i = 3; i < 13; ++i) {
        string_stack.push(alphabet.substr(i-3,3));
    }
    string_stack.peek();
    string_stack.pop();
    string_stack.peek();
    string_stack.print();
    std::cout << std::endl;
    std::cout << "------------------------stack int test--------------------------" << std::endl;
    Stack<int, 10> int_stack;
    int_stack.pop(); // TODO: pop-function should detect empty stack
    for (unsigned long i = 0; i < 10; ++i) {
        int_stack.push(static_cast<int>(i));
    }
    int_stack.push(999); // TODO: push-function should detect end of stack
    int_stack.peek();
    int_stack.pop();
    int_stack.peek();
    int_stack.print();
    std::cout << std::endl;
    std::cout << "------------------------stack double test-----------------------" << std::endl;
    Stack<double, 10> double_stack;
    for (unsigned long i = 0; i < 10; ++i) {
        double_stack.push(static_cast<double>(i));
    }
    double_stack.peek();
    double_stack.pop();
    double_stack.peek();
    double_stack.print();
    return 0;
}
