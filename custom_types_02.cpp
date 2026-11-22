#include <compare>

class Nec {
public:
	constexpr Nec(int i) noexcept
		: mval{ i } {
	}

	auto operator<=> (const Nec& other) const = default;
private:
	int mval;
};
