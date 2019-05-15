#include <iostream>
#include <vector>
#include "triangle.h"
#include "square.h"
#include "circle.h"

int main()
{
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "///               BME - C++ I - EXERCISE 7                  ///" << std::endl;
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << std::endl;
    Triangle t1 (1 ,2);
    Triangle t2 (3 ,4);
    Triangle t3 (5 ,6);
    Square s1 (1);
    Square s2 (2);
    Square s3 (3);
    Circle c1 (1);
    Circle c2 (2);
    Circle c3 (3);

    std::vector<Shape*> shapeVec {&t1 , &t2 , &t3 , &s1 , &s2 , &s3 , &c1 , &c2 , &c3 };

    // Range−based f o r l o op (C++11)
    for ( const auto & element : shapeVec )
    {
        element -> report ();
    }
    return 0;
}
