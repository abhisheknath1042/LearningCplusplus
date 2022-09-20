// const_cast in C++

//NOTE:
//The expression const_cast<T>(v) can be used to change the const or 
// volatile qualifiers of pointers or references
// Where T must be a pointer, reference or pointer to member type

#include <iostream>
using namespace std;


// int main() {
// 	//invalid and undefined behavior
// 	const int a1 = 10;
// 	const int *b1 = &a1;
// 	int *d1 = const_cast<int*>(b1);
// 	*d1 = 15;

// 	// Valid Behavior
// 	int a2 = 10;
// 	const int *b2 = &a2;
// 	int *d2 = const_cast<int*>(b2);
// 	*d2 = 30;

// 	return 0;

// }


// When we need to call some 3rd Party library where it is taking 
// variable/object as non-const  but not changing that

void thirdPL(int* x)
{
	int k=10;
	cout << k+*(x);
}

int main()
{
	const int x = 20;
	const int *px = &x;

	thirdPL(const_cast<int*>(px));
	return 0;
}