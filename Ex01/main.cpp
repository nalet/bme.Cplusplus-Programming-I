#include <iostream>
#include <cmath>
#include <iomanip>
#include "fibonacci.h"

using namespace std;

int main()
{
    int f = 1;
    int fprev = 0;
    double ratio = 0;
    std::setprecision(17);

    std :: cout << fprev << std :: endl ;

     do {
     std :: cout << f << "\t\t Ratio: " << std::fixed << ratio << std :: endl ;
     int tmp = fibonacci (f, fprev );
     ratio = goldenRatio(f, fprev);
     fprev = f;
     f = tmp ;

     } while ( fprev <= f );
     std :: cout << std :: endl ;
     std :: cout << "Max int value: " << std::numeric_limits<int>::max() << std :: endl ;
}
