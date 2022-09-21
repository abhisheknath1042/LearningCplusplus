// Explicit Constructor in C++


#include <iostream>
using namespace std;

class Base
{
	int b_var;
public:
	Base(){}
	Base(int var) : b_var(var) {}
	// explicit Base(int var) : b_var(var) {}
	void print() {std::cout << b_var << std::endl;}
};

void fun(Base b)
{
	b.print();
}


int main() {

	Base obj1(10); // Normal call to constructor
	Base obj2 = 20; // Implicit call to constructor

	fun(obj1); // Normal call to constructor
	fun(30); // Implicit call to constructor

	return 0;
}