// operator overloading
/*
when we overload the operator to do something other than they are meant to
do, or overload the operator to perform some custom action on our user-defined
data type. this can be done using keyword "operator"
this can be members or non members of class or friend function.
when the overload operator function is a member function it takes
only argument
if our overloaded operator function is a friend function we need to pass
two arguments
syntax for operator overlaoding
{{return-type}} operator{{operator-to-overload}}(args)
{
    // code //
}
syntax for operator overloading outside the class
{{return-type}} {{name-of-class}} :: operator{{operator-to-overload}}(arg)
*/

#include <iostream>
using namespace std;

class Marks
{
    int intmark, extmark;

public:
    Marks(){intmark = 0;extmark = 0;} // default constructor
    Marks(int im, int em)
    {
        intmark = im;
        extmark = em;
    }

    void display()
    {
        cout << "You marks are " << intmark << " " << extmark << endl;
    }

    void operator-=(int m)
    {
        intmark -= m;
        extmark -= m;
    }

    Marks operator+(Marks m);
    Marks operator-(Marks m);
    Marks operator++(); // this will be for prefix uninary operator 
    friend Marks operator--(Marks &obj); // this also will be for prefix uniary operator
    Marks operator++(int); // when we pass int in the arg this will differentiate from pre from post uninary operator
    friend Marks operator+=(Marks &obj, int m);
    friend Marks operator--(Marks &obj, int);
};

Marks operator--(Marks &obj, int)
{
    obj.intmark--;
    obj.extmark--;
    return obj;
}
Marks Marks :: operator++(int)
{
    Marks temp(*this);
    intmark++;
    extmark++;
    return temp;
}
Marks Marks :: operator++() // as ++ and -- are uninary operator and they operator on
{                       // only 1 argument and that one arg will be automatacilly supplied by complier
    ++intmark;
    ++extmark;
    return *this;
}
Marks operator--(Marks &obj)
{
    --obj.intmark;
    --obj.extmark;
    return obj;
}
Marks Marks ::operator+(Marks m)
{
    Marks temp;
    temp.intmark = intmark + m.intmark;
    temp.extmark = extmark + m.extmark;
    return temp;
}
Marks operator+=(Marks &obj, int m) // as this is a friend function we needed to pass obj through reference
{
    obj.intmark += m;
    obj.extmark += m;
    return obj;
}
Marks Marks ::operator-(Marks m)
{
    Marks temp;
    temp.intmark = intmark - m.intmark;
    temp.extmark = extmark - m.extmark;
    return temp;
}

int main()
{
    //making two objs
    Marks m1(10, 20), m2(40, 50);
    m1.display();
    m2.display();

    // performing + and - 
    Marks m3 = m1 + m2;
    Marks m4 = m1 - m2;
    m3.display();
    m4.display();

    // performing short hand operating
    m1 += 10;
    m1.display();

    m2 -= 10;
    m2.display();
    
    // performing increment and decrement 
    //for pre
    ++m3;
    m3.display(); 
    --m3;
    m3.display(); 

    m3++;
    m3.display();
    // for post 
    m2++;
    m2.display();
    m2--;
    m2.display();

    return 0;
}