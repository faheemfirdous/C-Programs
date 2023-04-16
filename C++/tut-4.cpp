

//passing class objects as function arguments 
#include<iostream>
using namespace std;
class ComplexN
{
private:
    int a;
    int b;
public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void printt()
    {
        cout << "The complex number is " a << " + " << b << "i" << endl; 
    }


    void addComplex(ComplexN o1, ComplexN o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

int main()
{
    ComplexN c1, c2, c3;
    c1.setData(1,3);
    c1.printt();

    c2.setData(1,3);
    c2.printt();

    c3.addComplex(c1, c2);
    c3.printt();
    
    return 0;
}