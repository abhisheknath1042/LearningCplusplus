// dynamic cast in C++

#include <iostream>
#include <exception>
using namespace std;

class Base
{
public:
	virtual void print()
	{
		cout << "Base" << endl;
	}
	
};

class Derived1 : public Base
{
public:
	void print()
	{
		cout << "Derived1" << endl;
	}
	
};

class Derived2 : public Base
{
public:
	void print()
	{
		cout << "Derived2" << endl;
	}
	
};

int main() {

	Derived1 d1;

	Base *bp = dynamic_cast<Base*>(&d1);

	// Derived2  *dp2 = dynamic_cast<Derived2*>(bp); // incorrect way

	Derived1 *dp2 = dynamic_cast<Derived1*>(bp); //correct way 

	if(dp2 == nullptr)
		cout << "NULL" << endl;
	else
		cout << "NOT NULL" << endl;

	try{
		Derived1 &r1 = dynamic_cast<Derived1&>(d1);
	}
	catch(std::exception& e)
	{
		cout << e.what() <<endl;
	}

	return 0;
}
