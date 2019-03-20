#include <iostream>
#include <memory>
#include "ex2_1.h"

void ex2_1()
{
    unsigned long arraySize{0};
    std::cout << "How many values do you want to enter?: ";
    std::cin >> arraySize;
    std::unique_ptr<int[]> smartPtr(new int [arraySize]);
    for (unsigned long i = 0;i<arraySize;i++)
    {
        std::cout << i << ".\tvalue: ";
        std::cin >> smartPtr[i];
    }
    int sum{0}, min{0}, max{0};
    min = arraySize > 0 ? smartPtr[0] : 0;
    max = arraySize > 0 ? smartPtr[0] : 0;
    for (unsigned long i = 0;i<arraySize;i++)
    {
        sum += smartPtr[i];
        min = min > smartPtr[i] ? smartPtr[i] : min;
        max = max < smartPtr[i] ? smartPtr[i] : max;
    }
    std::cout << "Results:" << std::endl;
    std::cout << "Sum: \t" << sum << std::endl;
    std::cout << "Min: \t" << min << std::endl;
    std::cout << "Max: \t" << max << std::endl;
}
