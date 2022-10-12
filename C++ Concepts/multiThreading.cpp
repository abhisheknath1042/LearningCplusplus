#include <iostream>
#include <thread>
using namespace std;

void func1(char symbol)
{
    for (int i = 0; i < 200; i++)
    {
        cout << symbol << " ";
    }
     
}

void func2()
{
    for (int i = 0; i < 200; i++)
    {
        cout << "#" << " ";
    }
    
}

int main()
{

    thread worker1(func1, 'P');
    thread worker2(func2);

    worker1.join();
    worker2.join();

    return 0;
}