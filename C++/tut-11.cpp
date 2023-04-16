// Inheritance in C++
/*
1. Reusability is a very important feature of OOPs
2. In C++ we can reuse a class and add addtional features to it
3. Reusing classes saves time and money
4. Reusing already tested and debugged class will save a lot effort of
   developing and debugging the same thing again.
5. The concept of reusablity in C++ is supported using inheritance.
6. We can reuse the properties of an existing class by inheriting from it.
7. The existing class is called as the Base class and all classes with
    inherit this base class is called derived class
8. There are different types of inheritance in C++.
    o. Single inheritance
    a. Multiple inheritance.
    b. Hierarchical inheritance.
    c. Multilevel inheritance.
    d. Hybrid inheritance.
9. Visiblity mode is the mode of inherited class's methods/members/...
   by default the visibility mode is private.
10. Private members of base class never gets inherited.
*/
// syntax of derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member/methods/etc....
}
*/
// single inheitance

#include <iostream>
using namespace std;

// Base Class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
    Employee() {}
};

// Derived class
class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpID) // if derived class doesn't have a constructor
    // of its own it will the constructor of base class.
    {
        id = inpID;
        languageCode = 9;
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee faheem(1), fakiha(2);

    cout << faheem.salary << endl;
    cout << fakiha.salary << endl;

    Programmer skillF(10);

    cout << skillF.languageCode << endl;
    skillF.getData();

    return 0;
}
/*
Visibility of data members
                     | Public derivation | Private derivation | Protected derivation
1. Private members   |  not inherited    |  not inherited     |  not inherited
2. Protected members |    protected      |     private        |   protected 
3. Public members    |     public        |     private        |   protected  
*/