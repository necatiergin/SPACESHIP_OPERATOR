#include <compare>
#include <iostream>

int main()
{
	boolalpha(std::cout);

	std::cout << (10 <=> 5 > 0) << '\n';	//true
	std::cout << (10 <=> 5 < 0) << '\n';	//false
	std::cout << (10 <=> 5 <= 0) << '\n';	//false
	std::cout << (10 <=> 5 >= 0) << '\n';	//true
	std::cout << (10 <=> 5 == 0) << '\n';	//false
	std::cout << (10 <=> 5 != 0) << '\n';	//true
}
