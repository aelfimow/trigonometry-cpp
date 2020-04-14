#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double A)
{
    return ((2.0 * pow(cos(A), 2.0)) - 1.0);
}

static double g(double A)
{
    return (pow(cos(A), 2.0) - pow(sin(A), 2.0));
}

int main()
{
    double const min = 0.0;
    double const max = 2.0 * 3.141592;
    double const delta = 0.1;

    for (double A = min; A <= max; A += delta)
    {
        auto diff = f(A) - g(A);
        std::cout << diff << std::endl;
    }

    return EXIT_SUCCESS;
}
