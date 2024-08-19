#include <iostream>
#include <compare>

int main()
{
	boolalpha(std::cout);
	std::cout << (std::strong_ordering::greater > 0) << '\n';	  //TRUE
	std::cout << (std::partial_ordering::unordered > 0) << '\n'; //FALSE
	std::cout << (std::partial_ordering::unordered < 0) << '\n'; //FALSE 

	std::cout << (std::strong_ordering::less > 0) << '\n';	  //FALSE 
	std::cout << (std::strong_ordering::less == 0) << '\n';  //FALSE
	std::cout << (std::strong_ordering::less != 0) << '\n';  //TRUE 
	std::cout << (std::strong_ordering::less >= 0) << '\n';  //FALSE 
}
