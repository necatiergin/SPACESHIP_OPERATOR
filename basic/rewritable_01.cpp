#include <compare>
#include <iostream>

struct B {
    int val;

    bool operator==(const B& other) const {
        return val == other.val;
    }

    std::strong_ordering operator<=>(const B& other) const {
        return val <=> other.val;
    }
};

int main() {
    B b1{10}, b2{20};

    std::cout << std::boolalpha;
    std::cout << (b1 != b2) << '\n';  // != rewrites to !(b1 == b2)
    std::cout << (b1 <= b2) << '\n';  // <= rewrites to (b1 <=> b2) <= 0
}
