// function templates


#include <iostream>
using namespace std;

// example of template function
// 1.
template <class T1,class T2>
float functAverage(T1 a, T2 b)
{
    float avg = (a + b)/2.0;
    return avg;
}

// 2. 
template <class T>
void swap(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
}

int* input()
{
    static int arr[1];
    
    for (int i = 0; i < 2; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{
    int* z = input();

    cout << functAverage(*z, *(z+1)) << endl;

    return 0;
}
/*
this is how we write a template function. just like template class 
T1 and T2 variable gets replaced by data type. during compile-time.
*/ 