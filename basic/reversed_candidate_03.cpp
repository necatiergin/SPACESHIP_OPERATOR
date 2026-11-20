#include <compare>
#include <cassert>

struct Number {
    int value;

    std::strong_ordering operator<=>(int x) const
    {
        return value <=> x;
    }
};

int main()
{
    Number n{ 10 };

    assert(n < 20);
    assert(20 > n);

    assert(n <= 10);
    assert(10 >= n);

    assert(n > 5);
    assert(5 < n);
}
