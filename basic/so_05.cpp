#include <iostream>
#include <cmath>

int main()
{
	boolalpha(std::cout);
	double x = NAN;

	std::cout << (x == x) << '\n';
	std::cout << (x < x) << '\n';
	std::cout << (x <= x) << '\n';
	std::cout << (x > x) << '\n';
	std::cout << (x >= x) << '\n';
	std::cout << (x != x) << '\n';
}
