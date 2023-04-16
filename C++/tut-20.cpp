// "this" keyword. 

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        a = a;   // compiler wont show any error but will assign "a" garbage
                 // value to "a". Inorder to solve this we use "this" keyword.
                
        this -> a = a; // using "this ->" will change the prefernce of "a" from 
                       // local to class variable as in C++ local variable
                       // have high preference. "this" is actually a pointer
                       
    }
    int process(int a)
    {
        this -> a = a + a; // "this" points to class variable and
        return this -> a;  // it is the only way to return class variables. 
    }
    A & proccess2(int a)  // here we have returned an object of class A
    {                     // and we can apply any method on it in the main
        this -> a = a * a;// function
        return *this; // "*this" holds the value of data member.
    }
    void getData()
    {
        cout << "The value of A is " << a << endl;
    }
};
int main()
{
    A a1;

    a1.setData(54);
    a1.getData();
    cout << a1.process(32) << endl;
    a1.proccess2(22).getData();
    
    return 0;
}