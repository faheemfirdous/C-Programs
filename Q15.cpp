#include<iostream>

using namespace std;

struct Distance
{
	int length;
	int breadth;
	int height;	
};

int main()
{
	Distance Distan;
	cout << "Enter the length, breadth and height(in meters):\n";
	cin >> Distan.length >> Distan.breadth >> Distan.height;
	float leng = Distan.length * 3.281;
	float bread = Distan.breadth * 3.281;
	float heigh = Distan.height * 3.281;
	float volume = leng * bread * heigh;
	cout << "The volume in ft is: " << volume;
	return 0;	
}
