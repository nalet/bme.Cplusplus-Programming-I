#include "fibonacci.h"

int fibonacci(int f, int fprev) {
    return f + fprev;
}

double goldenRatio(int f, int fprev) {
    int prevprev = f - fprev;
    return static_cast<double>(fibonacci(f,fprev)) / static_cast<double>(fibonacci(fprev, prevprev));
}
