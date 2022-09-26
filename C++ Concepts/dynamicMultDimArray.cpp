// dynamic Multidimensional Array

#include <iostream>
using namespace std;



int main() {

	int rows, cols;
	cout << "Enter rows and columns: ";
	cin>> rows >> cols  ;

	int **table= new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		table[i] = new int[cols];
	}

	table[1][2] = 43;
    cout << table[1][2] << endl;

	for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }

    delete[] table;

    table = NULL;
    
	

	return 0;
}