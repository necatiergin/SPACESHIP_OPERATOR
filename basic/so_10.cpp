#include <compare>
#include <iostream>

class Point {
public:
    Point(int x, int y) :mx(x), my(y) {}
    auto operator<=>(const Point&) const = default;
private:
    int mx;
    int my;
};

int main()
{
    Point p1{ 2, 2 }, p2{ 2, 5 };

    boolalpha(std::cout);

    std::cout << (p1 == p2) << '\n'; // false
    std::cout << (p1 != p2) << '\n'; // true

    std::cout << (p1 < p2) << '\n'; // true
    std::cout << (p1 <= p2) << '\n'; // true
    std::cout << (p1 > p2) << '\n'; // false
    std::cout << (p1 >= p2) << '\n'; // false
}
