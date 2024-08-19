#include <compare>
#include <type_traits>


template <typename T, typename U>
class Nec {
private:
	T mt;
	T mu;
public:
	//...
	auto operator<=>(const Nec& other)->std::common_comparison_category_t<decltype(mt <=> mt), decltype(mu <=>mu)>
	{
		if (auto cmp1 = mt <=> other.mt; cmp1 != 0)
			return cmp1;

		return mu <=> other.mu;
	}

};
