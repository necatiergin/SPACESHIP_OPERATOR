#include <iostream>
#include <compare>

class Person
{
public:
	// ...other members
	auto operator<=>(const Person& other)const
	{
		if (auto cmp = m_first_name <=> other.m_first_name; cmp != 0)
			return cmp;

		if (auto cmp = m_last_name <=> other.m_last_name; cmp != 0)
			return cmp;

		return m_id <=> other.m_id;
	}
private:
	std::string m_first_name;
	std::string m_last_name;
	int m_id;
};

int main()
{
	Person p1{}, p2{};

	auto b1 = p1 < p2;
	auto b2 = p1 <= p2;
	auto b3 = p1 > p2;
	auto b4 = p1 >= p2;

	//auto b5 = p1 == p2; // Syntax Error.
}
