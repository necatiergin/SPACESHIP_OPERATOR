#include <iostream>
#include <vector>
#include <algorithm>

std::ostream& operator<< (std::ostream& os, std::strong_ordering sval)
{
    return os << (sval == 0 ? "equal" :
        sval < 0 ? "less" : "greater");
}

int main()
{
    using namespace std;

    vector vec1{ 12, 7, 9, 5, 3 };
    vector vec2{ 12, 7, 13 };

    auto result1 = std::lexicographical_compare(vec1.begin(), vec1.end(),
        vec2.begin(), vec2.end());

    auto result2 = std::lexicographical_compare_three_way(vec1.begin(), vec1.end(),
        vec2.begin(), vec2.end());
    std::cout << "result1: " << result1 << '\n';
    std::cout << "result2: " << result2 << '\n';
}
