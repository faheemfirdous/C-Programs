// concept of copy constructor
// when no copy constructor is found, compiler supplies its own copy constructor

#include<iostream>
using namespace std;

class Number
{
private:
    int a;
public:
    Number(){
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj) // copy constructor
    {
        cout << "Copy constructor called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
    Number x,y,z(45),z2;
    z.display();
    y.display();
    x.display();
    Number z1(z); // here we invoke copy constructor 
    z1.display();
    z2 = z; // here copy constructor won't get invoke

    Number z3 = z; // here copy constructor will get invoke 
    return 0;
}