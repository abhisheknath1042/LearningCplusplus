#include <iostream>
#include <queue>

using namespace std;

int main() {

  queue<string> q;

  q.push("Ronnaldo");
  q.push("Rooney");
  q.push("Giggs");
  q.push("Alex");

  cout<<"Size before -"<<q.size()<<endl;
  
  cout<<"First Element -"<<q.front()<<endl;
  q.pop();

  cout<<"First Element after pop-"<<q.front()<<endl;

  cout<<"Size After -"<<q.size()<<endl;
  
}