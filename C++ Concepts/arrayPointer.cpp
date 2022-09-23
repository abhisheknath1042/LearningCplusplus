// default

#include <iostream>
using namespace std;


int main() {

    int luckyNumbers[5];  // {0,1,2,3,4};

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << "Enter a Number: ";
        cin >> luckyNumbers[i]; 
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << *(luckyNumbers+i) << " | ";
    }
    
    

   /* cout << "Lucky numbers: " << luckyNumbers << endl;
    cout << "Lucky numbers Address: " << &luckyNumbers[0] << endl;

    cout << "Value: " << luckyNumbers[2] << endl;
    cout << "Value Pointer: " << *(luckyNumbers+2) << endl; */

	return 0;
}