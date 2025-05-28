#include <compare>

class Nec {
public:
	constexpr Nec(int i) noexcept
		: mval{ i } {
	}

	//for == and !=
	[[nodiscard]] bool operator==(const Nec& other)const noexcept
	{
		return mval == other.mval;
	}

	// for < <= > >=
	[[nodiscard]] std::strong_ordering operator<=> (const Nec& other) const noexcept
	{
		if (mval == other.mval)
			return std::strong_ordering::equal;

		if (mval < other.mval)
			return std::strong_ordering::less;

		return std::strong_ordering::greater;
	}
private:
	int mval;
};
