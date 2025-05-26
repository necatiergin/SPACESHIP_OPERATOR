#include <compare>

struct Nec {
    int a;
    char b;
    auto operator<=>(const Nec&) const = default;
};

constexpr bool test() 
{
    Nec x{ 1, 'a' }, y{ 2, 'b' };
    return (x <=> y) < 0;
}

static_assert(test()); 
