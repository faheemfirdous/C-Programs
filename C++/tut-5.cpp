
// concept of friend function

/*Friend functions in CPP
1. not in the scope of class
2. it  gives permission the non member function to use the private 
    data of the class.
3. can be invoked without teh help of any object
4. usually contains teh objects of the class as arguments.
5. can be declared inside public or private section of the class
6. it can't access the members directly by their names and need
    object_name.member_name(o1.a and o2.b) to access any member.
*/ 

#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend Complex sumComplex(Complex o1, Complex o2); // this gives the function to access the private data of the class
    void printNumber()
    {
        cout << "your number is " << a << " + " << b <<"i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1,3);
    c2.setNumber(33,43);

    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
