/*area and perimeter calculator*/

#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int rad,len,wid;
    int area, peri;
    char inp[50];
    cout << "Enter the shape for which you want to calculate area and perimeter: \n";
    cin >> inp;
    int val = strcmp(inp,"rectangle");
    if(val == 0)
    {
        cout << "Enter the length and width:" << endl;
        cin >> len >> wid;
        area = len * wid;
        peri = 2 * (len + wid);
    }
    else
    {
        cout << "Enter the radius of the circle: " <<  endl;
        cin >> rad;
        area = 3.147 * rad*rad;
        peri = 2 * 3.147 * rad;
    }
    cout << "The perimeter and area of "<< inp << " are : "<< peri << " "<< area;
    return 0;
}
