#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    double d = std::numeric_limits<double>::quiet_NaN();

    std::cout << std::boolalpha;
    std::cout << std::isnan(d) << '\n';    // true
    std::cout << std::isnan(3.14) << '\n'; // false
}
