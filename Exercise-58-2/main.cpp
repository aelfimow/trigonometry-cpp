#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return 1.0 / sqrt(1.0 - pow(cos(theta), 2.0));
}

static double g(double x)
{
    return 1.0 / sin(x);
}

int main()
{
    double const min = 0.0;
    double const max = 2.0 * 3.141592;
    double const delta = 0.1;

    for (double x = min; x <= max; x += delta)
    {
        auto diff = f(x) - g(x);
        std::cout << diff << std::endl;
    }

    return EXIT_SUCCESS;
}
