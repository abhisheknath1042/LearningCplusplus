#include <iostream>

using namespace std;

class Number
{
private:
    int a;
public:
    Number(){}
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout<< "Copy Constructor is Invoked !" << endl;
        a = obj.a;
    }
    ~Number(){}

    void display()
    {
        cout << "The number for this object is: " << a << endl;
    }
};



int main()
{

    Number x, y, z(56), z1;

    x.display();
    y.display();
    z.display();

    z1=z;
    z1.display();

    Number z3(z1);
    Number z2 = z1;

    return 0;
}