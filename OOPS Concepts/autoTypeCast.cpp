//auto typecasting in CPP

#include <iostream>
#include <typeinfo>
using namespace std;

class Base{
  
};


int main() {
	auto x = 20;
	auto y = 20.5;
	auto b = Base();
	auto p = new Base();

	cout << typeid(x).name() <<endl; // integer
	cout << typeid(y).name() <<endl; // decimal
	cout << typeid(b).name() <<endl; // normal class
	cout << typeid(p).name() <<endl; // pointer

  // std::cout << "Hello World!\n";
  return 0;
}