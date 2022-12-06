
// employee id and compen....


#include<iostream>

struct employee
{ 
    int employee_id;
    float employee_coms;
};

using namespace std;
int main()
{

    employee e1,e2,e3;
    // employee number 1    
    cout << "Enter employee number 1's ID and compensation: \n";
    cin >> e1.employee_id >> e1.employee_coms;
    // employee number 2
    cout << "Enter employee number 2's ID and compensation: \n";
    cin >> e2.employee_id >> e2.employee_coms;
    // employee number 3
    cout << "Enter employee number 3's ID and compensation: \n";
    cin >> e3.employee_id >> e3.employee_coms;
    // printing employee's information
    cout << "The employee ID's and there commpensations are:" << endl
         << e1.employee_id << e1.employee_coms
         << e2.employee_id << e2.employee_coms
         << e3.employee_id << e3.employee_coms;
    
    return 0;
}
