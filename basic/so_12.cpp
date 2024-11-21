#include <compare>

class Wint {
public:
	Wint() = default;
	Wint(int val) : mval(val) {}
	//...
	//std::strong_ordering operator<=>(const Wint& other)const
	//{
	//	return mval == other.mval ? std::strong_ordering::equal :
	//		mval < other.mval ? std::strong_ordering::less :
	//		std::strong_ordering::greater;
	//}

	//std::strong_ordering operator<=>(const Wint& other) const
	//{
	//	return mval <=> other.mval;
	//}

	auto operator<=>(const Wint&)const = default;
private:
	int mval{};
};
