// multiple parameters templete.

#include<iostream>
using namespace std;

template <class T1, class T2>
class myClass
{
    public:
        T1 data1;
        T2 data2;
        void display()
        {
            cout << this -> data1 << this -> data2;
        }
};

int main()
{
    myClass<int,char> obj;
    obj.display();    
    return 0;
}
/*
this is the syntax for multiple parameter templates.
*/