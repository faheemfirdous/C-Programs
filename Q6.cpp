#include<iostream>

using namespace std;

int main()
{
	cout << "Enter a five digit number:\n";
	int number;
	cin >> number;
	int a = number % 10;
	int b = (number/10) % 10;
	int c = (number/100) % 10;
	int d = (number/1000) % 10;
	int e = (number/10000) % 10;
	cout << "The reverse order of " << number << " is " <<
		 a << b << c << d << e;
	return 0;
}
