// tower of hanoi

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char Beg, char End, char Mid)
{
    if(n == 1)
    {
        cout << Beg << " --> " << End << endl;
    }
    else
    {
        towerOfHanoi(n-1, Beg, Mid, End);
        cout << Beg << " --> " << End << endl;
        towerOfHanoi(n-1, Mid, End, Beg);
    }
}

int main()
{
    int n;
    cout << "Enter number of disks: " << endl;
    cin >> n;
    
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
