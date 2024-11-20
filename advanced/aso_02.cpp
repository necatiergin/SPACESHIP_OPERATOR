#include <compare>
#include <type_traits>

template <typename T, typename U>
class Nec {
private:
	T mt;
	U mu;
public:
	//...
	auto operator<=>(const Nec& other)
	->std::common_comparison_category_t<decltype(mt <=> mt), decltype(mu <=>mu)>
	{
		if (auto cmp = mt <=> other.mt; cmp != 0)
			return cmp;

		return mu <=> other.mu;
	}

};
