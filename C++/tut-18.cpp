/*
Pointers to access data members and functions of class
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl
             << "The imaginary is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1, c2;

    c1.setData(21, 64);
    c1.getData(); // this is convential method that we have seen before

    Complex *ptr = &c2;     // ptr is a pointer with data type complex that
                            // points to c2 object
    (*ptr).setData(45, 11); // this is how we can access class object
    (*ptr).getData();       // using pointer

    // using new operator

    Complex *ptrr = new Complex; // new operator eliminates need to create 
    (*ptrr).setData(12, 32);    // variables
    (*ptrr).getData();
     
    // arrow operator ->
    // (*ptr).setData(32,23); == ptr ->setData(32,23);
    ptr -> getData();
    ptrr -> getData();

    // Array of objects
    Complex *pt = new Complex[4]; // we got array of 4 objects
    pt -> setData(3, 4);
    pt -> getData();
    (pt+1) -> setData(1,2);
    (pt+1) -> getData();
    (pt+2) -> setData(11,22);
    (pt+2) -> getData();
    (pt+3) -> setData(21,21);
    (pt+3) -> getData();    
    
    return 0;
}