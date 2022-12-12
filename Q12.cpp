#include<iostream>

using namespace std;

void zeroSmaller(int *a, int *b)
{
	if(*a < *b)
	{
		*a = 0;
	}
	else 
	{
		*b = 0;
	}
	cout << *a << *b;
}

int main()
{

	int& a,b;
	cout << "Enter two numbers:" << endl;
	cin >> *a >> *b;
	zeroSmaller(*a,*b);
}
