
// classes
/*
OOPs - objects and class
C++ - initially called C with classes 
class - extension of structures(in C)
structures has limitations 
    - members are public 
    - no methods
classes - structures and more
        - can have mehtods and properties
        - can have few members as private & few as public
structures in C++ are typedefed
you can declare an object with the class declarion like this:
class Employee
{
    class defination
} 
Employee faheem, abx, dxyz;
here faheem, abx are objects of employee class.

//Nested member function - 
member functions of the same class that are used within the other
member functions.
// local classes
a class declared inside a function becomes local to that function.
it can be used locally i.e inside the funciton and not outside.
the methods of a local class must be defined inside it only.
a local class can have static function but not static data members.

// Nested classes
A nested class is a class which is declared in another enclosing class. 
A nested class is a member and as such has the same access rights as any
other member. The members of an enclosing class have no special access 
to members of a nested class
*/


#include<iostream>
using namespace std;

class Employee
{
    private :
        int a,b,c; // these variables have local scope in this class only
    public :
        int d,e;
        void setData(int a, int  b, int c); // declaration
        void getData()
        {
            cout << "The value of a is "<< a << endl;
            cout << "The value of b is "<< b << endl;
            cout << "The value of c is "<< c << endl;
            cout << "The value of d is "<< d << endl;
            cout << "The value of e is "<< e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b - b1;
    c = c1;
}

int main()
{
    Employee faheem;
    faheem.d = 45;
    faheem.e = 455;  
    faheem.setData(1,22,3);
    faheem.getData();
    return 0;
}
