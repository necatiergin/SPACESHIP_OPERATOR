#include <string>
#include <cassert>

class Person {
	std::string name;
	double value;
public:
		std::strong_ordering operator<=> (const Person& rhs) const 
		{
			auto cmp1 = name <=> rhs.name;
			if (cmp1 != 0) 
				return cmp1; // return strong_ordering for std::string
		
			auto cmp2 = value <=> rhs.value; // might be partial_ordering for double
				// map partial_ordering to strong_ordering:
			assert(cmp2 != std::partial_ordering::unordered); // RUNTIME ERROR if unordered
			return	cmp2 == 0 ? std::strong_ordering::equal
					: cmp2 > 0 ? std::strong_ordering::greater
				: std::strong_ordering::less;
	}
};
