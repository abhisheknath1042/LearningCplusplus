#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int>num;
  vector<int> n;

  for(int i=1; i<=5; i++)
    {
      num.push_back(i);
    }

  cout<<"Output from beginning to end: ";

  for(auto a=num.begin(); a!=num.end(); a++){
    cout<<*a <<" ";
  }

  n.push_back(2);
    int no = n.size(); //storing the size of vector 'no'
    cout<<"Last Element:" << n[no-1] << endl;

}

