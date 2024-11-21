// quoted from C++20 - Jossutis

#include <concepts>

template<typename T>
class Nec {
	//...
public:
	[[nodiscard]] virtual std::strong_ordering
		operator<=>(const Type&) const requires(!std::same_as<T, bool>) = default;
};

// the above is equivalent to the one below
template<typename T>
class Nec_{
	//...
public:
	[[nodiscard]] virtual std::strong_ordering
		operator<=> (const Type&) const requires(!std::same_as<T, bool>) = default;
	[[nodiscard]] virtual bool
		operator== (const Type&) const requires(!std::same_as<T, bool>) = default;
};

