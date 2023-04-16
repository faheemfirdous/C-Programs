// initialization list in constructor
/*
syntax for initialization list in constructor:
constructor (arg-list) : initilization-section
{
    assignment + other code;
}

*/

#include<iostream>
using namespace std;

class Test 
{
    int a, b;
    public:
        //Test(int i, int j) : a(i), b(j)   all these test cases 
        //Test(int i, int j) : a(i), b(i+j)    will run properly
        //Test(int i, int j) : a(i), b(2+j)
        //Test(int i, int j) : a(i), b(a+j)
        // Test(int i, int j) : b(a+j), a(i+b) --> this will compile 
        //         but will give garbage value at a, because a 
        //         is initialized first
        Test(int i, int j) : a(i)
        {
            b = j;
            //{{constructor-body}};
            cout << "Constructor has been executed" << endl;
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
        }
};

int main()
{
    Test T1(4,5);

    return 0;
}
