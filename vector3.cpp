#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr;

    for (int i = 1; i <= 10 ;i++)
    {
        arr.push_back(i);
    }

    cout<<"Vector size is: "<<arr.size()<<endl;

    cout<<"Capacity of Vector is: "<<arr.capacity()<<endl;

    cout<< "The maximum size is:"<<arr.max_size()<<endl;

    arr.resize(5);
    cout<< "Vector size after resize func is: "<<arr.size()<<endl;

    if(arr.empty()==false){
        cout<<"The vector is not empty"<<endl;
    }
    else{
        cout<<"The Vector is Empty"<<endl;
    }
    
}





