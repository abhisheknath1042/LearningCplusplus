#include <iostream>
using namespace std;

class Base{
  int x;
public:
  Base(){}
  Base(int x1){
    x1 = x;
  }
  friend void fun(Base &);
};

void fun(Base &obj)
{
  cout<<"Before: "<< obj.x << endl;
  obj.x=20;
  cout<<"After: "<< obj.x << endl;
}


int main() {
  Base b(10);
  fun(b);
  // std::cout << "Hello World!\n";
  return 0;
}