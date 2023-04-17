// Templates
/* 
like class serve a template for objects in c++ we have template that we can
use make barebone of class and functions, we will write template of class 
or functions and compiler will automatically replace certain bits in that 
template to make it dynamic and our code reusable.
templates are also called parameterized classes.
syntax
template <class T>
class vector
{
    T *arr;
    public:
        vector(T *ar)
        {
            // code //
        }
        T sum(T a, T b)
        {
            T c = a + b;
            return c;
        }
}
here T is the piece of code which gets replaced with any data type example
int, float, char, double,.... etc
moreover we can have more than 1 parameter that can be replaced
template <class T1, class T2>
int main()
{
    vector<int> myvect(ptr); // <int> will change the T to int and we can
                        // use this for any data type. 
    vector<float> myfvect(ptr1); 
    return 0;
}
*/