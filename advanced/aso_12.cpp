#include <compare>
#include <iostream>

class Base {
public:
	bool operator<(const Base&)const
	{
		std::cout << "Base::operator<() called!\n";
		//...
		return false;
	}

	bool operator==(const Base&)const
	{
		std::cout << "Base::operator==() called!\n";
		//...
		return true;
	}
};

class Der : public Base {
public:
	std::strong_ordering operator<=>(const Der&)const = default;
};

int main()
{
	Der d1, d2;

	(void)(d1 < d2);
	(void)(d1 != d2);
}
