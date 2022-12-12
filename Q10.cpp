#include<iostream>

using namespace std;

float circarea(float radius)
{
	return radius*radius*3.147; 
}

int main()
{
	float radius;
	cout << "Enter the radius:" << endl;
	cin >> radius;
	cout << "The area of the circle = " << circarea(radius);
	return 0;
}
