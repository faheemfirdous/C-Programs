// constructors in derived class
/*
1. We can use constructor in derived class
2. If base class constructor doesn't have any arg, ther is no need of any
    constructor in derived class.
3. But if there are one or more args in the base the class constructor, derived
   class need to pass args to the base class constructor.
4. If both base and derived classes have constructor, base class constructor
   is executed first.
5. If in multiple inheritance, base classes are constructed in the order in
    which they appear in the class declaraton
6. In multilevel inheritance, the constructor are executed in the order of inheritance.
7. The constructors for virtual base classes are invoked before an nonvirtual
    base class.
8. If there are multiple virtual base classes, they are invoked in the order
    declared.
9. Any non-virtual base class are then constructed before the derived class
    constructor is executed.
*/
// Order of execution of constructor
// case 1
class A;
class B : public A
{
    // order of execution of constructor -> first A() then B()
    public:
        B(int b1,int b2) : A(a1,a2){}
};
// case 2
class B : public A, public C
{
    // order of execution of constructor -> first A() then C() and B()
     public:
        B(int b1,int b2) : A(int a1,int a2), C(int c1,int c3){}
};
// case 3
class B : public A, virtual public C, virtual public D
{
    // order of execution of constructor -> first C() then D() then A() 
    //                                       and B()
    public:
        B(int b1,int b2) : C(int c1,int c3), D(int d1,int d3), A(int a1, int a2){}
};