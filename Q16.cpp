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
	cout << "Enter the x and y coordinates of first point: " << endl;
	cin >> p1.x >> p1.y;
	cout << "Enter the x and y coordinates of second point: " << endl;
	cin >> p2.x >> p2.y;
	p3.x = p1.x + p2.x;
	p3.y = p1.x + p2.y;
	cout << "The 3rd point will be: " << p3.x << " and "<< p3.y;
	return 0;
}
