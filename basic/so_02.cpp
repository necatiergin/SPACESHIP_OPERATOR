struct Nec {
	//...
	bool operator==(int)const;
	//...
};

int main()
{
	Nec x;
	//

	auto b1 = x == 5;
	auto b2 = 5 == x; //valid  x.operator==(5)
	//== is a primary operator and primary operators are reversible
}
