#include<iostream>

using namespace std;

long hms_to_secs(int hr, int min,int sec)
{
	return ((hr*60)+(min*60)+sec);
}

int main()
{
	int hr,min,sec;
	cout << "Enter the time:" << endl;
	cin >> hr >> min >> sec;
	cout  << "Time in second is " << hms_to_secs;
}
