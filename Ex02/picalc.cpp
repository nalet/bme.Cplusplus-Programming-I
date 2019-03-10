#include "picalc.h"
#include <iostream>
#include <random>
#include <cmath>
#include <iomanip>

void ex2_picalc()
{
    std::cout << "Setup Random Number Generator output: " << std::endl;
    // A standard interface to a platform-specific non-deterministic random number generator
    std::random_device rd; // Create Random Device as seed
    std::mt19937 mt(rd ()); // Init Mersenne Twister Engine with that seed
    // A continous random distribution on the range [min, max] with equal probability.
    std::uniform_real_distribution<double> dist (0.0 , 1.0) ;

    // Generate 10 random numbers
    for ( int i =0; i <10; ++i)
    {
        std::cout << dist(mt) << "\n";
    }

    std::cout << "Throwing a Dart output: " << std::endl;
    throwingADart(dist, mt);
    std::cout << "Throw many Darts output: " << std::endl;
    throwManyDarts(dist, mt, 5000000);
}

void throwingADart(std::uniform_real_distribution<double>& dist, std::mt19937& mt)
{
    double x = dist(mt);
    double y = dist(mt);

    std::cout << "Single throw with (x,y) with values (" << x << "," << y << ")";

    if ( x*x + y*y <= 1)
    {
        std::cout << " was successful" << std::endl;
    }
    else
    {
        std::cout << " was unsuccessful" << std::endl;
    }
}

void throwManyDarts(std::uniform_real_distribution<double>& dist, std::mt19937& mt, int darts)
{
    std::cout << "Start to throw " << darts << " darts" << std::endl;
    int throws = 0;
    int success = 0;

    for(int i = 0;i < darts;i++) {
        double x = dist(mt);
        double y = dist(mt);
        throws++;
        if ( x*x + y*y <= 1)
        {
            success++;
        }
    }

    std::cout << "Successful throws: " << success << std::endl;
    std::cout << "Result: " << std::fixed << std::setprecision(17) << 4 * static_cast<double>(success) / static_cast<double>(throws) << std::endl;
}
