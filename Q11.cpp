#include<iostream>

using namespace std;

double power(double n, int p)
{
	double power=1;
	for(int i=p;i>=1;i--)
	{
		power *= n;
	}
	return power;
}

int main()
{
	double n;
	int p;
	cout << "Enter the n and p:" << endl;
	cin >> n >> p;
	cout << "The " << n << " to the power " << p << " is " <<power(n,p);
	return 0;
}


