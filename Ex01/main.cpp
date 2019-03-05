#include <iostream>
#include "fibonacci.h"

using namespace std;

int main()
{
    int f = 1;
    int fprev = 0;

    std :: cout << fprev << std :: endl ;

     do {
     std :: cout << f << std :: endl ;
     int tmp = fibonacci (f, fprev );

     fprev = f;
     f = tmp ;

     } while ( true );
     std :: cout << std :: endl ;
}
