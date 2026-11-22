#include <compare>
#include <iostream>

struct empty {
	auto operator <=> (const empty&)const = default;
};


int main()
{
	empty e1, e2;
	boolalpha(std::cout);

	std::cout << (e1 == e2) << '\n'; //true
	std::cout << (e1 != e2) << '\n'; //false
	std::cout << (e1 > e2) << '\n'; //false
	std::cout << (e1 < e2) << '\n'; //false
	std::cout << (e1 <= e2) << '\n'; //true
	std::cout << (e1 >= e2) << '\n'; //true
}
