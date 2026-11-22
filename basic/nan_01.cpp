#include <iostream>
#include <limits>

int main()
{
	boolalpha(std::cout);
	double x = std::numeric_limits<double>::quiet_NaN();

	std::cout << (x == x) << '\n';
	std::cout << (x < x) << '\n';
	std::cout << (x <= x) << '\n';
	std::cout << (x > x) << '\n';
	std::cout << (x >= x) << '\n';
	std::cout << (x != x) << '\n';
}
