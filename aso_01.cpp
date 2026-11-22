#include <string>

class Employee {
public:
	auto operator<=> (const Employee& rhs) const
	{
		auto cmp1 = m_name <=> rhs.m_name;
		if (cmp1 != 0)
			return cmp1;

		return m_wage <=> rhs.m_wage; //ERROR
	}
private:
	std::string m_name;
	double m_wage;
};
