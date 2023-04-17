// class template

#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(T m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <int> v1(3);
    vector <int> v2(3);

    v1.arr[0] = 2;
    v1.arr[1] = 3;
    v1.arr[2] = 4;

    v2.arr[0] = 5;
    v2.arr[1] = 6;
    v2.arr[2] = 7;

    cout << v1.dotProduct(v2) << endl;
    // if we haven't used template we would have to create another class to 
    // the same thing.
    vector <float> v3(3);
    vector <float> v4(3);

    v3.arr[0] = 2.33;
    v3.arr[1] = 3.33;
    v3.arr[2] = 4.33;

    v4.arr[0] = 5.34;
    v4.arr[1] = 6.34;
    v4.arr[2] = 7.34;

    cout << v3.dotProduct(v4);
    return 0;
}