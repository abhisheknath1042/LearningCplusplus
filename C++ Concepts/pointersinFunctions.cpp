// default

#include <iostream>
using namespace std;


// int getMin(int numbers[], int size)
// {
// 	int min=numbers[0];
	
// 	for (int i = 1; i < size; i++)
// 	{
// 		/* code */
// 		if(numbers[i] < min)
// 		{
// 			min =  numbers[i];
// 		}
// 	}
	
// 	return min;
// }

// int getMax(int numbers[], int size)
// {
// 	int max=numbers[0];
	
// 	for (int i = 1; i < size; i++)
// 	{
// 		/* code */
// 		if(numbers[i] > max)
// 		{
// 			max =  numbers[i];
// 		}
// 	}
	
// 	return max;
// }

int getMinMax (int numbers[], int size, int *min, int *max)
{
	for (int i = 0; i < size; i++)
	{	
		if ( numbers[i] > *max)
			*max = numbers[i];

		if ( numbers[i] < *min)
			*min = numbers[i];
	}


	

}

int main() {

	int numbers[5] = {5,4,-2,29,6};

	int min = numbers[0];
	int max = numbers[0];

	getMinMax(numbers, 5, &min, &max);

	// cout << "Minimum number in Array is: " << getMin(numbers,5) << endl;
	
	// cout << "Maximum number in Array is: " << getMax(numbers,5) << endl;

	cout << "Maximum number in array: " << min << endl ;
	cout << "Minimum number in array: " << max << endl ;

	return 0;
}