//Member Function Templates & Overloading Template Functions

#include <iostream>
using namespace std;

template <class T>
class Faheem
{
    public:
        T data;
        Faheem(T a)
        {
            data = a;
        }
        void display();
};
template <class T>   // this is the syntax to write a template for a member
void Faheem<T> :: display()// function outside the template
        {
            cout << data << endl;
        } 

void func(int a)
{
    cout << "I'm a function 1 " << a <<endl;
}
// if there is a template function and a normal function the function 
// which is exact match gets prefence over a template function

template <class T>
void func(T a)
{
    cout << "I'm a function 2 " << a <<endl;
}
int main()
{
    Faheem<float> h(21.2);
    h.display();
    func(21);
    func(32.3232);
    func('s');
    
    return 0;
}