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
	constexpr Wrapper x{ 234 }, y{ 526 };

	constexpr auto val = x <=> y;
  //defaulted function is constexpr
}
