// using function template finding mean of two numbers

#include <iostream>
using namespace std;


template <class T1,class T2>
float functAverage(T1 a, T2 b)
{
    float avg = (a + b)/2.0;
    return avg;
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