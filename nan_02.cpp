// NaN propagation

#include <iostream>
#include <limits>

int main()
{
    double x = std::numeric_limits<double>::quiet_NaN();

    std::cout << x + 10.0 << '\n';
    std::cout << x - 10.0 << '\n';
    std::cout << x * 10.0 << '\n';
    std::cout << x / 10.0 << '\n';
    std::cout << 10.0 / x << '\n';
    std::cout << x * 0.0 << '\n';
}
