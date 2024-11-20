class Mint
{
public:
    Mint(int x = 0) : mx(x) { }
    [[nodiscard]]bool operator==(const Mint& other)const
    {
        return mx == other.mx;
    };
private:
    int mx;
};
int main()
{
    Mint m1{ 2 }, m2{ 6 };

    [[maybe_unused]] auto b = m1 != m2; //Syntax error in C++17. valid since C++20

}
