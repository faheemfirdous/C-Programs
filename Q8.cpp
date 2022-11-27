#include<iostream>

using namespace std;

int main()
{
	int year;
	cout << "Enter year:\n";
	cin >> year;
	if (year >= 0)
	{
		if(year % 4 == 0 )
		{
			cout << "This is a leap year.";
		}
		else
		{
			cout << "This is not a leap year.";
		}
	}
	else 
	{
		cout << "Invalid input.";
	}
}
