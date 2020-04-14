#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double theta)
{
    return (pow(1.0 + cot(theta), 2.0) + pow(1.0 - cot(theta), 2.0));
}

static double g(double theta)
{
    return (2.0 / pow(sin(theta), 2.0));
}

int main()
{
    double const min = 0.0;
    double const max = 2.0 * 3.141592;
    double const delta = 0.1;

    for (double theta = min; theta <= max; theta += delta)
    {
        auto diff = f(theta) - g(theta);
        std::cout << diff << std::endl;
    }

    return EXIT_SUCCESS;
}
