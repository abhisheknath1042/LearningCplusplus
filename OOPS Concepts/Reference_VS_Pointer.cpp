// Reference vs Pointer

#include <iostream>
using namespace std;


int main() {

	int i = 10; 
	cout << i << endl;

	int &a = i; //reference
	cout<< a << endl;

	int *p = &i; //pointer
	cout<< p << *p << i;

	return 0;
}

// ----------------------COMMENTS-----------------------

// 1. Pointer has its own address while reference is used to hold 
// address of a variable
// 2. Reassignment is not possible with Reference
// 3. Pointer can have NULL value while Reference cannot
// 4. Arithmetic Operations are not provided for a Reference
//	  ex - ptr++ (increment Pointer) ref++(this is not possible)
// 5. Indirection - Reference has 1 level of indirection
//	  while Pointer can have multiple eg:
		// int *ptr=&i;
		// int **ptr1=&p;
		// int ***ptr2=&ptr1;
