#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return 0.0;
}

static double g(double x)
{
    return 0.0;
}

int main()
{
    double const min = 0.0;
    double const max = 2.0 * 3.141592;
    double const delta = 0.1;

    for (double x = min; x <= max; x += 0.1)
    {
        auto diff = f(x) - g(x);
        std::cout << diff << std::endl;
    }

    return EXIT_SUCCESS;
}
