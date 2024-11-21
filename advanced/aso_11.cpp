#include <iostream>
#include <vector>
#include <algorithm>

std::ostream& operator<< (std::ostream& os, std::strong_ordering x)
{
	if (x < 0) 
		return os << "less";
	
	if (x > 0) 
		return os << "greater";
	
	return os << "equal";
}

int main()
{
	std::vector v1{ 2, 7, 4, 5 };
	std::vector v2{ 1, 13, 6 };
	auto b = std::lexicographical_compare(v1.begin(), v1.end(),  v2.begin(), v2.end());
	//b is bool

	auto sord = std::lexicographical_compare_three_way(v1.begin(), v1.end(),v2.begin(), v2.end());
	//sord is strong ordering
	
	std::cout << "b    =  " << b << '\n';
	std::cout << "sord = " << sord << '\n';
}
