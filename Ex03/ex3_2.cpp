#include <iostream>
#include "ex3_2.h"

void ex3_2()
{
    std::cout << "----------------------What’s wrong here?-----------------------" << std::endl;
    ex3_2_a();
    std::cout << std::endl;
    std::cout << "-------------Why and where does the program crash?-------------" << std::endl;
    ex3_2_b();
    std::cout << std::endl;
    std::cout << "-----------------------Fix the function!-----------------------" << std::endl;
    ex3_2_c(168);
    std::cout << std::endl;
    std::cout << "---------------------------Hoppla!-----------------------------" << std::endl;
    ex3_2_d();
    std::cout << std::endl;
}
int ex3_2_a()
{
//    Original
//    int *pointToAnInt = new int ;
//    pointToAnInt = 9;
//    std::cout << " The value at pointToAnInt : " << * pointToAnInt ;
//    delete pointToAnInt ;
//    return 0;
    int *pointToAnInt = new int;
    *pointToAnInt = 9; //need to dereference
    std::cout << " The value at pointToAnInt : " << *pointToAnInt ;
    delete pointToAnInt;
    return 0;

}
int ex3_2_b()
{
//    Original
//    int pointToAnInt = new int;
//    int *pNumberCopy = pointToAnInt ;
//    *pNumberCopy = 30;
//    std :: cout << * pointToAnInt ;
//    delete pNumberCopy ;
//    delete pointToAnInt ;
//    return 0;
    int *pointToAnInt = new int; //new returning a pointer
    int *pNumberCopy = pointToAnInt;
    *pNumberCopy = 30;
    std::cout << *pointToAnInt;
    delete pNumberCopy;
    delete pointToAnInt;
    return 0;
}
int* ex3_2_c(const int length)
{
//    Original
//    int temp [length];
//    return temp;
    int* temp = new int[static_cast<unsigned long>(length)]; //need to be a pointer to an array, would be unaccessible if the scope is closed.
    return temp;
}
int ex3_2_d()
{
//    Original
//    int array [5] { 0, 1, 2, 3 };
//    for ( int count = 0; count <= 5; ++ count )
//    std :: cout << array [ count ] << " ";

//    return 0;
    int array[5] { 0, 1, 2, 3, 4 }; //array of 5 needs 5 values
    for(int count = 0; count < 5; ++count) //the array has 5 and not 6 values. Counter starts at 0
        std::cout << array[count] << " ";

    return 0;
}
