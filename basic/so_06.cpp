struct Nec {
	int m_val{};
	bool operator!=(int val) const
	{
		return val != m_val;
	}
};

int main()
{
	Nec n;

	auto b1 = n != 5;
	auto b2 = 5 != n; //invalid
	//secondary operators cannot be reversed
}
