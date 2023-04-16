#include<iostream>
using namespace std;

class A
{
    private:
        int p, q;  // p, q won't get inherited becoz they are private members
    protected:
        int a,b,c;  // a,b,c will get inherited and their visibility would be procted in B class
    public:
        int x,y;  // x,y and setData() will get inherited and their visibility would be public in B class
    void setData(int h, int g)
    {
        p = h;
        q = g;
        a = 332;
        b = 243;
        c = 432;
        x = 20;
    }
};

class B : public A
{
    public: // we have inherited setData() and a,b,c,x,y from A
        void getData()
        {
            cout << a << b << c << x << y << endl;
        }
        float z = 10;
};

class C : protected B
{
    public: // we have inherited setData(), a,b,c,x,y from A and getData(),z from B with protected visibility
        int process()
        {
            return a + b + c;
        }
};// class C would have all the methods and data members of A and B except private members .

int main()
{
    A a1;
    B b1;
    C c1;
    cout << c1.process();
    a1.setData(24,23);
    b1.getData();

    return 0;
}