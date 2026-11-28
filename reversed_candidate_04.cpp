#include <iostream>

struct Number {
    int value;

    bool operator==(int x) const
    {
        std::cout << "member operator==\n";
        return value == x;
    }
};

bool operator==(int x, const Number& n)
{
    std::cout << "non-member operator==\n";
    return x == n.value;
}

int main()
{
    Number n{ 10 };

    bool b = 10 == n;
}
