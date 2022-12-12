#include<iostream>

using namespace std;

int twoDISTANCE(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else 
	{
		return b;
	}
}
int main()
{
	int a,b;
	cout << "Enter two distances:" << endl;
	cin >> a >> b;
	cout << "The greatest distance is " << twoDISTANCE(a,b);
	return 0;
}
