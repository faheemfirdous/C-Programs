// Virtual function 
/* 
As we saw in tut-21.cpp we used sa base_class_pointer to point to derived 
class object and through that pointer we can't access the data members and 
functions of derived class but using concept of virtual function we can 
overcome that limitation.
Rules for virtaul fucntions:
1. They cannot be static.
2. They are accessed by object pointes.
3. Virtual function can be a friend of another class.
4. A virtual function in a base class might not be used.
5. If a virtual functiion is defined in a base class, ther is no necessity
   of redefining it in the derived class.
*/

#include<iostream>
using namespace std;

class baseClass
{
    public:
        int var1 = 1;
        virtual void display() // this virtual keyword will force the compiler
        {                // not to call this this function if base_class_pointer is used
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
    baseClass base_obj;
    derivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer -> display(); 
    /*
    using virtual keyword we can 
    now call function of derived class using base_class_pointer
    */ 
    return 0;
}