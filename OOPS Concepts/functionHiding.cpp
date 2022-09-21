// Function Hiding in C++

#include <iostream>
using namespace std;

class Base
{
public:
	void fun (int i)
	{
		cout << "Base" << endl;
	}

};

class Derived: public Base
{
public:
  using Base::fun; //use func from Base
  
	void fun (char c)
	{
		cout<< "Derived" << endl;
	}
};

int main() {

	Derived d1;

	// d1.Base::fun(1); // use func from Base
  d1.fun(1); //function Hiding
	d1.fun('a');

	return 0;
}