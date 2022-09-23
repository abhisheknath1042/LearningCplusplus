// default

#include <iostream>
using namespace std;


//// ------------- Void Pointers Tutorial --------------- ////

void printNumber(int *numPtr)
{
	cout << "Number: " << *numPtr << endl;
}

void printLetter(char *charPtr)
{
	cout << "Letter: " << *charPtr << endl;
}

void print(void *ptr, char type)
{
	switch(type)
	{
		case 'i': cout << *((int*)ptr) << endl; //handle int* 
		case 'c': cout << *((char*)ptr) << endl; //handle char* ;
	}
}



int main() {

    //// -------------  Pointers Tutorial --------------- ////

	// int n=5;
	// cout<< &n << endl;

	// int *ptr = &n;
	// cout<< *ptr << '\t' << ptr << endl;

	// *ptr = 10;
	// cout<< *ptr << '\t' << ptr << endl;

	// //////

	// int v;
	// int *ptr2 = &v;
	// *ptr2 = 7;
	// cout<< "V=" << *ptr2 << '\t' << ptr2 << endl;


    //// ------------- Void Pointers Tutorial --------------- ////

    int num = 5;
    char letter = 'a';

	printNumber(&num);
	printLetter(&letter);
    

	return 0;
}