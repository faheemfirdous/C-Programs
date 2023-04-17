// default parameter to class template.

#include<iostream>
#include <string>
using namespace std;

template<class T1 = int, class T2 = float, class T3 = string> 
/*
this is how to write default 
parameters for template they can later be changed in the
code but if there is no parameter then these data types wil
be used
*/
class faheem
{
    public:
        T1 a;
        T2 b;
        T3 c;
        faheem(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }
        void display()
        {
            cout << "The value of a is " << a << endl
                 << "The value of b is " << b << endl
                 << "The value of c is " << c << endl;
        }
};
int main()
{
    faheem <> f(4,3,"faheem"); // remeber to type <> for any class template to use defalult parameter
    f.display();

    faheem <double,string,char> ff(2.3232, "sdg", 'h');
    ff.display();
    return 0;
}