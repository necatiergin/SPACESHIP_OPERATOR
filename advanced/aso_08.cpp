#include <compare>
#include <iostream>

template <typename T, typename U>
void print_compare(const T& t, const U& u)
{
	using result_type = std::compare_three_way_result_t<T, U>;
	std::cout << "compare result_type : " << typeid(result_type).name() << '\n';
	auto result = t <=> u;

	std::cout << "result of comparison : ";
	if (result == 0) {
		if (std::is_same_v <result_type, std::strong_ordering>)
			std::cout << "equal";
		else
			std::cout << "equivalent";
	}
	else if (result > 0) {
		std::cout << "greater";
	}
	else if (result < 0) {
		std::cout << "less";
	}
	else {
		std::cout << "unordered";
	}
}

int main()
{
	print_compare(10, 6);
}
