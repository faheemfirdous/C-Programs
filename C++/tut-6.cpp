

/* concept of friend class that is how to access to one the member
function  of one class to access the
private data of another class moreover if we have to give alot of functions
access to the data of another class we can make friend class that will give 
whole class the access of another class
*/

// friend declaration can be written in public and private section of the class

#include <iostream>
using namespace std;

class Complex; // this is called forward declaration inorder to avoid error

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex); // it is necessary to declare function here and define later as it will give the error
    int sumCompComplex(Complex, Complex);
};

class Complex
{
private:
    int a;
    int b;
    /* This is the individual declaration of member functions 
    of calculator class as friend with complex class */
    friend int Calculator ::sumRealComplex(Complex , Complex);
    friend int Calculator ::sumCompComplex(Complex ,Complex);

    /* Alternatly we can give access to whole calculator class to 
    access the private data of complex class */
    friend class Calculator;


public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "The number is " << a << " + " << b << "i." << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int  Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(12, 34);
    c2.setNumber(11, 22);

    Calculator calc;
    int result1 = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is " << result1 << endl;
    int result2 = calc.sumCompComplex(c1, c2);
    cout << "The sum of the complex part of c1 and c2 is " << result2 << endl;
    return 0;
}