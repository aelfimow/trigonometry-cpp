#include <cstdlib>
#include <cmath>
#include <iostream>

static double sec(double x)
{
    return (1.0 / cos(x));
}

static double cosec(double x)
{
    return (1.0 / sin(x));
}

static double f(double x)
{
    double const a = (sin(x) * sin(x) * (sec(x) + cosec(x)));
    double const b = (cos(x) * tan(x));
    return (a / b);
}

static double g(double x)
{
    return (1.0 + tan(x));
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
