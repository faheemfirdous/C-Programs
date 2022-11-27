/*write a programe to determine the location of the point in cartisen plane*/

#include<iostream>
using namespace std;

int main()
{
	float x,y;
	cout << "Enter x and y coordinates: " << endl;
	cin >> x >> y;

	if(x == 0 and y == 0) // for orign
	{
		cout << "Point is on the orign.";
	}
	else if(x > 0 and y > 0 ) 	// first quadrant
	{
		cout << "Point is in the first quadrant.";
	}
	else if(x > 0 and y == 0)
	{
		cout << "Point is on the x axis and infront of y axis.";
	}
	else if(x == 0 and y > 0)
	{
		cout << "Point is on the y axis and above the axis.";
	}
	// second quadrant
	else if(x < 0 and y > 0 )
	{
		cout << "Point is in the second quadrant.";
	}
	else if(x < 0 and y == 0)
	{
		cout << "Point is on the x axis and behind y axis.";
	}
	// third quadrant
	else if(x < 0 and y < 0 )
	{
		cout << "Point is in the third quadrant.";
	}
	else if(x < 0 and y == 0)
	{
		cout << "Point is on the x axis and behind y axis.";
	}
	else if(x == 0 and y < 0)
	{
		cout << "Point is on the y axis and below x axis.";
	}
	// fourth axis
	else if(x > 0 and y < 0 )
	{
		cout << "Point is in the second quadrant.";
	}
	
	return 0;
}
