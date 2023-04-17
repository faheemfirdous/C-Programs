// Exception handling 
/*
Exception are the unexpected that happen during the execution of the code.
During run-time of the programe there may be some statement that is invalid/
wrong
another type of exception can occur during the run-time of the code that is
the user have given some invalid or non-complient data-type which our 
program couldn't process 
and we need to handle these exceptions inorder to run our programe smoothly
exception handling provides a mechanism through which we can handle the error
generating part seperatly from the rest of the code.
It provides the user information so that he/she can detect the mistake.
This helps in dealing with exception by transferring the control from one part
to another and takes care of the exception by providing certain code.
these exception are handled with the help of three keywords
Try
{
    // block of code //
}
Catch({{exception-name}})
{
    //  catch block
}
Catch({{exception-name-2}})
{
    //  catch block 2  //
}
Catch({{exception-name-n}})
{
    //  catch block nth block  //
}
throw(args); --> this will through the args to the catch blocks 
*/

#include <iostream>
using namespace std;


int main()
{
    // example 1
    int age;
    cout << "Enter age:  ";
    cin >> age ;
    try
    {
        if(age>=24)
        {
            cout << "You can drink" << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch(int age)
    {
        cout << "can't drink your age is" << age << endl;
    }

    // example 2
    int num, denum, result;
    cout << "Enter num and denum" << endl;
    cin >> num >> denum;
    try
    {
        if(denum <= 0)
        {
            throw(denum);
        }
        else
        {
            result = num / denum;
        }
    }
    catch(int denum)
    {
        cout << "ERROR!!!! " << endl 
             << "You can't divide " << num << " with 0!" << endl;
    }
    cout << "The result is " << result;
    return 0;
}