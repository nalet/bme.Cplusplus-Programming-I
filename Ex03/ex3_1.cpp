#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <numeric>
#include "ex3_1.h"

void ex3_1()
{
    unsigned long arraySize{0};
    std::cout << "How many values do you want to enter?: ";
    std::cin >> arraySize;
    std::cout << "--------------------------'unsafe'-arrays----------------------" << std::endl;
    ex3_1_1(arraySize);
    std::cout << "---------------------------smart-pointer-----------------------" << std::endl;
    ex3_1_2(arraySize);
    std::cout << "---------------------------STL-container-----------------------" << std::endl;
    ex3_1_3(arraySize);

}
void ex3_1_1(unsigned long arraySize)
{
    int* unsafeArray = new int [arraySize];
    for (unsigned long i = 0;i<arraySize;i++)
    {
        std::cout << i << ".\tvalue: ";
        std::cin >> *(unsafeArray+i);
    }
    int sum{0}, min{0}, max{0};
    std::cout << "//with index access" << std::endl;
    //index access
    sum = 0;
    min = arraySize > 0 ? unsafeArray[0] : 0;
    max = arraySize > 0 ? unsafeArray[0] : 0;
    for (unsigned long i = 0;i<arraySize;i++)
    {
        sum += unsafeArray[i];
        min = min > unsafeArray[i] ? unsafeArray[i] : min;
        max = max < unsafeArray[i] ? unsafeArray[i] : max;
    }
    std::cout << "Results:" << std::endl;
    std::cout << "Sum: \t" << sum << std::endl;
    std::cout << "Min: \t" << min << std::endl;
    std::cout << "Max: \t" << max << std::endl;

    std::cout << "//with pointer arithmetic" << std::endl;
    //Pointer arithmetic
    sum = 0;
    min = arraySize > 0 ? *(unsafeArray+0) : 0;
    max = arraySize > 0 ? *(unsafeArray+0) : 0;
    for (unsigned long i = 0;i<arraySize;i++)
    {
        sum += *(unsafeArray+i);
        min = min > *(unsafeArray+i) ? *(unsafeArray+i) : min;
        max = max < *(unsafeArray+i) ? *(unsafeArray+i) : max;
    }
    std::cout << "Results:" << std::endl;
    std::cout << "Sum: \t" << sum << std::endl;
    std::cout << "Min: \t" << min << std::endl;
    std::cout << "Max: \t" << max << std::endl;
}
void ex3_1_2(unsigned long arraySize)
{
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
void ex3_1_3(unsigned long arraySize)
{
    std::vector<int> vectorInt;
    int tmp{0};
    for (unsigned long i = 0;i<arraySize;i++)
    {
        std::cout << i << ".\tvalue: ";
        std::cin >> tmp;
        vectorInt.push_back(tmp);
    }

    std::cout << "Results:" << std::endl;
    std::cout << "Sum: \t" << std::accumulate(vectorInt.begin(),vectorInt.end(), 0) << std::endl;
    std::cout << "Min: \t" << *std::min_element(vectorInt.begin(),vectorInt.end()) << std::endl;
    std::cout << "Max: \t" << *std::max_element(vectorInt.begin(),vectorInt.end()) << std::endl;
}
