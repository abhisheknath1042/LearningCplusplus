//Function Pointer

// Header
#include <iostream>
using namespace std;



// Function Pointer
// -- Function pointer stores the address of another Function

// int add(int a, int b) { return a+b; }

// int main() {

// 	int (*fun)(int,int) = add;  // New way
// 	// int (*fun)(int,int) = &add; // Old way : works with OLD Compilers

// 	int c = (*fun)(1,2);
// 	cout << "FunPtr: " << c << endl;

// 	return 0;
// }



// How to pass a function pointer as an Argument ?


// int add(int a, int b) { return a+b; }

// int fun1 (int (*someFun)(int,int))
// {
// 	int c = someFun(1,2);
// 	return c;
// }

// void main()
// {
// 	fun1(add);
// 	cout << "Res: " << c << endl;
// }



// How to return a Function Pointer in C++ ??

// int add(int a, int b) { return a+b; }

// int sub(int a, int b) { return a-b; }

// typedef int(*mathFun)(int,int);

// mathFun fun (int type)
// int  (*fun(int type))(int,int)
// {
// 	if (type == 1)
// 	{
// 		return add;
// 	}

// 	if (type == 2)
// 	{
// 		return sub;
// 	}
// }

// int main()
// {
// 	int (*someFun)(int,int);
// 	someFun = fun(1);
// 	int c = someFun(1,2);

// 	cout << " C= " << c <<endl;
// }



// How to use Array of Pointer Function

int add(int a, int b) { return a+b; }

int sub(int a, int b) { return a-b; }

typedef int(*mathFun)(int,int);

int main()
{
	mathFun Arr[2] = {add,sub};
	int c = (*Arr[0])(1,2);
	int d = (*Arr[1])(1,2);

	cout << "C= " << c <<endl;
	cout << "D= " << d << endl;

	return 0;
}