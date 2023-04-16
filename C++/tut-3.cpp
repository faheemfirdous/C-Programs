
// making array of objects of classes
#include<iostream>
using namespace std;
class Employee
{
private:
    int id;
    int salary;
public:
    void setID()
    {
        salary = 123;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getID()
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    Employee DigitalWorld[4];
    for(int i=0;i<4;i++)
    {
        DigitalWorld[i].setID();
        DigitalWorld[i].getID();
    }
    
    return 0;
}