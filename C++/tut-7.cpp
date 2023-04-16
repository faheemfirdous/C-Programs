

/*concept of constructors and distructors 
constructors: are used to initialize private data of a class while making
objects. this is in public and is special member function. it has same 
name as that of the class. this is automatically invoked whenever object is
created. This doesn't have a return type. this doesn't take any parameters
*/

#include<iostream>
using namespace std;

class Complex
{
private:
    int a, b;
public:
    Complex(void);  // these are all constructor function 
    Complex(int,int);
    Complex(int);

    void printNumber()
    {
        cout << "The number is " << a << " + " << b << "i." << endl;
    }
};
Complex :: Complex(void) // --> this is a default constructor.
                        // this take no parameters
{
    a = 0;
    b = 0;
}
Complex :: Complex(int x,int y) // this is parameterized constructor 
{                               //this takes 2 or more parameters
    a = x;
    b = y;
}                                
Complex :: Complex(int x) // this is another constructor that take only arg
{                      // we can have multiple constructors in our code 
    a = x;            // that take different inputs this concept is called
    b = 0;           // constructor overloading
}
// Complex :: Complex(int x=32, int y=12,int z=9) // this constructor has default arg
// {          // as the name indicate these will be the default of variable 
//     int a = x; // if we don't assign some value in main function
//     int b = y;
//     int c = z;
// }
int main()
{
    // this is default constructor
    Complex c1;
    c1.printNumber();
    // parameterized constructor
    Complex c2(5, 10);
    c2.printNumber();
    // this invokes our 3rd type of constructor 
    Complex c3(5);
    c3.printNumber();

    return 0;
}

