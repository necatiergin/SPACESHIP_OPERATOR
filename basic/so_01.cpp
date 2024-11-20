#include <compare>

class Nec {
public:
	constexpr Nec(int i) noexcept
		: m_val{ i } {
	}

	//for == and !=
	[[nodiscard]] bool operator==(const Nec& other)const noexcept
	{
		return m_val == other.m_val;
	}

	// for < <= > >=
	auto operator<=> (const Nec& rhs) const
	{
		return m_val <=> rhs.m_val; // defines ordering (<, <=, >, and >=)
	}
private:
	int m_val;
};
