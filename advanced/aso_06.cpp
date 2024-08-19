#include <iostream>
#include <compare>

template<typename T, typename U>
auto synth_three_way(const T& lhs, const U& rhs)
{
	if constexpr (std::three_way_comparable_with<T, U>)
	{
		return lhs <=> rhs;
	}
	else
	{
		if (lhs == rhs)
			return std::strong_ordering::equal;
		if (lhs < rhs)
			return std::strong_ordering::less;

		return std::strong_ordering::greater;
	}
}

class identity
{
public:
	bool operator<(const identity&) const;
	bool operator==(const identity&) const;
};

class Person
{
	identity m_id;
	int m_no;
	std::strong_ordering operator <=>(const Person& other)const
	{
		if (auto result = m_no <=> other.m_no; result != 0)
			return result;
		return synth_three_way(m_id, other.m_id);
	}
};
