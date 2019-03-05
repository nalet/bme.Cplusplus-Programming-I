#include <iostream>
#include <cmath>
#include <iomanip>
#include "fibonacci.h"

using namespace std;

int main()
{
    int f = 1;
    int fprev = 0;
    double ratio = 1;
    double const dev_template = 1.61803399;

    std :: cout << fprev << std :: endl ;

     do {
     std :: cout << f << "\t\t Ratio: " << std::fixed << std::setprecision(17) << ratio << " - Dev[%]: " << ( ratio - dev_template ) / dev_template * -100 << std :: endl ;
     int tmp = fibonacci (f, fprev );
     ratio = goldenRatio(f, fprev);
     fprev = f;
     f = tmp ;

     } while ( fprev <= f );
     std :: cout << std :: endl ;
     std :: cout << "Max int value: " << std::numeric_limits<int>::max() << std :: endl ;
}
