
// concept of static variable

#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;
public:
    void setData(void)
    {
        cout << "Enter the id:" << endl;
        cin >> id;
        count ++;
    }
    void getData(void)
    {
        cout << "The ID of the employee number " << count << " is " << id << endl;
    }
};

int Employee :: count  = 1; /* default value is zero if we don't 
                            initialize it these variables are called static
                            variable*/

int main()
{
    Employee faheem, fakiha, fahim;
    faheem.setData();
    faheem.getData();
    
    fahim.setData();
    fahim.getData();
   
    fakiha.setData();
    fakiha.getData();
    return 0;
}
