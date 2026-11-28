#include <iostream>

struct Value {
    int x;

    bool operator==(double d) const
    {
        std::cout << "Value::operator==(double)\n";
        return x == d;
    }
};

int main()
{
    Value v{ 20 };

    std::cout << std::boolalpha;

    std::cout << (v == 20.0) << '\n';
    std::cout << (20.0 == v) << '\n';
}
