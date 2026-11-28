// quoted from C++20 - Jossutis

#include <string>
#include <cassert>

class Person {
	std::string name;
	double value;
public:
		std::strong_ordering operator<=> (const Person& rhs) const 
		{
			auto cmp1 = name <=> rhs.name;
				if (cmp1 != 0) return cmp1; // return strong_ordering for std::string
			// map floating-point comparison result to strong ordering:
			return std::strong_order(value, rhs.value);
		}
	}
};
