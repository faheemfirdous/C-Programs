// ambiguity resolution in inheritance
/*
in multiple inheritance if we have a method/function that has same name 
in 2 or 3 classes that raises a question which function/method will be invoked
when we use that in derived class
*/

#include<iostream>
using namespace std;

class base1
{
    public:
        void greet() // greet function 1
        {
            cout << "how are you" << endl;
        }
};

class base2
{
    public:
        void greet() // greet function 2
        {
            cout << "kaise ho" << endl;
        }
};

class derived : public base1, public base2
{
    int a;
    public:
        void greet()
        {
            base1::greet(); // this how to resolve ambiguity by specify 
                            // which method from which class should be invoked
        }

};

class B
{
    public:
        void say()
        {
            cout << "Hello world " << endl;
        }
};

class D : public B
{
    int a;
    public:
        void say()
        {
            cout << "Hi world" << endl;
        }
}; 

int main()
{
    // ambiguity 1
    base1 base1obj;
    base1obj.greet(); // till now we simply invoke a method in base1 class

    base2 base2obj;
    base2obj.greet(); // this will invoke greet method in base2 class

    derived derivedobj;
    derivedobj.greet(); // now here rises the abiguity as compiler don't 
                        // which greet() method are we trying to invoke

    // ambiguity 2
    B b1;
    b1.say(); // this will call say() of B class 

    D d1;
    d1.say(); // this will call say of D class because we have say() in 
            // D class also and derived function automatically overides
            // inherited function from base class.
    // in this case ambiguity gets resolved automatically

    return 0;
}