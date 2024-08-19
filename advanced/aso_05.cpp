#include <iostream>
#include <compare>

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

		return m_id <=> other.m_id; // syntax error! there is not shapeship operator for identity class !
	}
};
