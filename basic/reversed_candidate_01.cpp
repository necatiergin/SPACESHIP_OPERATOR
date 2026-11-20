struct Number {
    int value;

    bool operator==(int x) const
    {
        return value == x;
    }
};

int main()
{
    Number n{ 10 };

    bool b1 = n == 10; // valid
    bool b2 = 10 == n; // valid (C++20)
}
