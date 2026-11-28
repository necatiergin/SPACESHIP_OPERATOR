#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    double inf = std::numeric_limits<double>::infinity();

    std::cout << std::sqrt(-1.0) << '\n';
    std::cout << std::log(-1.0) << '\n';
    std::cout << std::acos(2.0) << '\n';
    std::cout << inf - inf << '\n';
    std::cout << inf / inf << '\n';
    std::cout << 0.0 * inf << '\n';
}
