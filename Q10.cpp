#include<iostream>

using namespace std;

struct Point
{
    int x;
    int y;
};
int main()
{
    Point p1,p2,p3;
    cout << "Enter the coordinates of P1:" << endl;
    cin >> p1.x >> p1.y;
    cout << "Enter the coordinates of P2:" << endl;
    cin >> p2.x >> p2.y;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout << "The coordinates of P3 are: " << p3.x << p3.y;
    return 0;
}
