// FUNCTOR in C++

#include <iostream>
using namespace std;

class Mul
{
	int _val;
public:
	Mul() {};
	Mul(int val):_val{val} {};

	int operator() (int val) 
	{ 
		return val*_val;
	}
	
};

int main() {

	Mul mult(12);

	cout << mult(2) << endl;
	cout << mult(7) << endl;

	return 0;
}