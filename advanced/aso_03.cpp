#include <compare>

int main()
{
	using namespace std;

	strong_ordering s_or{};
	weak_ordering w_or{};
	partial_ordering p_or{};

	p_or = w_or;
	p_or = s_or;
	w_or = s_or;

	//s_or = w_or; //error
	//s_or = p_or; //error
	//w_or = p_or; //error
}
