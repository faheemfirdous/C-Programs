
/*retor scale */
#include<iostream>

using namespace std;

int main()
{
    float earthq;
    cout << "Enter the value of earthquake: " << endl;
    cin >> earthq;
    if(earthq < 5)
    {
        cout << "\nLittle or no damage.";
    }
    else if(earthq > 5 && earthq < 5.5)
    {
        cout << "Some damage.";
    }
    else if(earthq > 5.5 && earthq < 6.5)
    {
        cout << "Serious damage to walls .";
    }
    else if(earthq > 6.5 && earthq < 7.5)
    {
        cout << "House buildings may collapse.";
    }
    else if(earthq > 7.5)
    {
        cout << "Catastrophic damage.";
    }
    return 0;
}
