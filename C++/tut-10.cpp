// destructor 

// destructor's work is to delete the constructor and free the memory that 
// constructor has utilized
// destructor never take argument nor returns any value
// destructor has the same name as class but we have to use ~ this before
// writing destructor

#include<iostream>
using namespace std;

int count = 0;

class num
{

public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object
              number " << count << endl;
    }
    ~num() 
    {
        cout << "This is the time when destructor is called for object
              number " << count << endl;
              count --;
    }
 
};


int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1 " << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }//after exiting this block destructor will be invoked for n2 and n3
    //as the scope of n2 and n3 is within the block so compiler will invoke destructor

    cout << "Back to main function" << endl;
    // before exiting the programe destructor will get invoke one last time
    // to clear n1
    return 0;
}