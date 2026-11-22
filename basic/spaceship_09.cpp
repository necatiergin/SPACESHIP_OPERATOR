#include <iostream>
#include <compare>

class Wrapper {
private:
	int m_id;
public:
	constexpr Wrapper(int i)noexcept : m_id(i) { }
	auto operator <=>(const Wrapper& other)const = default;	// C++20 spaceship operator
	//friend auto operator <=>(const Wrapper& x, const Wrapper& other) = default;	// C++20 spaceship operator
};

int main()
{
	Wrapper x{ 234 }, y{ 526 };

	std::cout << std::boolalpha;
	std::cout << "x == y : " << (x == y) << '\n';   // false
	std::cout << "x != y : " << (x != y) << '\n';   // true
	std::cout << "x > y  : " << (x > y) << '\n';     // false
	std::cout << "x >= y : " << (x >= y) << '\n';   // false
	std::cout << "x < y  : " << (x < y) << '\n';     // true
	std::cout << "x <= y : " << (x <= y) << '\n';   // true
	std::cout << typeid(x <=> y).name() << '\n';  // struct std::strong_ordering
}
