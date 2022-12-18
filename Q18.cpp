/*Assume that you want to generate a table of multiples of any given number. Write a program
that allows the user to enter the number and then generates the table, formatting it
into 10 columns and 20 lines. Interaction with the program should look like this (only the
first three lines are shown):*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    for(int i=1;i<=30;i++)
    {
        cout << setw(10) << num*i << "\t";
        if(i%10 == 0)
        {
            cout << endl;           
        }

    }
    return 0;
}
