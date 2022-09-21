// dynamic cast in C++

#include <iostream>
using namespace std;

class Base
{
public:
	Base();
	~Base();

	virtual void print()
	{
		cout << "Base" << endl;
	}
	
};

class Derived1 : public Base
{
public:
	Derived1();
	~Derived1();

	void print()
	{
		cout << "Derived1" << endl;
	}
	
};

class Derived2 : public Base
{
public:
	Derived2();
	~Derived2();

	void print()
	{
		cout << "Derived2" << endl;
	}
	
};

int main() {

	Derived1 d1;

	Base *bp = dynamic_cast<Base*>(&d1);

	Derived2  *dp2 = dynamic_cast<Derived2*>(&bp);

	if(dp2 == nullptr)
		cout << "NULL" << endl;
	else
		cout << "NOT NULL" << endl;

	return 0;
}