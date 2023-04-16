//Polymorphism 
/*
Poly means multi 
morphism means form 
Polymorphism means one name and multiple forms and
In C++ we have 
    1. Run-time Polymorphism.
        compiler deffer the decision of linking of objects with functiions 
        and happens during run-time of code.
    2. Compile-time Polymorphism(early binding):
        object gets bound to function during compilation time.
Example:
    1. Function overloading. (Compile-time Polymorphism)
    2. Operator overlaodig.  (Compile-time Polymorphism)
    3. Virtual functions.    (Run-time Polymorphism)
    4. Pure virtual functions.
*/

#include<iostream>
using namespace std;

class baseClass
{
    public:
        int var1 = 1;
        void display()
        {
            cout << "The value of var1 = " << var1 << endl;
        }
};

class derivedClass : public baseClass
{
    public:
        int var11 = 2;
        void display()
        {
            cout << "The value of var1 = " << var1 << endl;
            cout << "The value of var11 = " << var11 << endl;

        }
};

int main()
{
    baseClass *base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived; // used to store address of derived-obj to pointer
    /*
    here we used a base class pointer to point to the derived class obj.
    but if we call any method/function of derived class using base 
    pointer it will call the base class function/mehtod with that name.
    */
    base_class_pointer -> var1 = 342;
    //base_class_pointer -> var11 = 234;  this line will through error
    base_class_pointer -> display();
    /*
    this is a case of late binding (Run-time Polymorphism)
    and we can only access data members, functions and methods that
    are inherited from base class to derived class using base class
    pointer and not the data member, functions of derived class using 
    base class pointer
    */  

    derivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer ->var1 =324;
    derived_class_pointer -> var11 = 213;
    derived_class_pointer -> display();

    return 0;
}