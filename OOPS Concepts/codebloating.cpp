// Code Bloating: Production of code which is perceived to be 
// unnecessarily slow and long i.e. waste of resources

#include <iostream>
using namespace std;

class base
{
	int x;
public:
	base();
	~base();
	inline void print(){ cout << x << endl;}
};

int main() {
  string str ("Abhishek Nath");
  cout << str << endl;
  
  base b1;
  b1.print();

  // std::cout << "Hello World!\n";
  return 0;
}