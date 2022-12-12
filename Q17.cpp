#include<iostream>

struct employee
{
	int employee_id;
	float employee_com;
};
using namespace std;

int main()
{
	employee a[20];

	for(int i=0;i<2;i++)
	{
		cout << "Enter employee number "<< ++i <<" ID and compensation:\n";
		cin  >> a[i].employee_id >> a[i].employee_com;
	}
	for(int i=0;i<3;i++)
	{
		cout << endl << a[i].employee_id <<" "<< a[i].employee_com;
	}
	return 0;
}
