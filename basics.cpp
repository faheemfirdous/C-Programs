#include<iostream>
using namespace std;

int main()
{
    // printing a statement 
    std::cout << "Hello world\n";
    cout << "Hello world" << endl; 
    // we can avoid typing std::cout at every print line by typing using namespace std at the top

    // declaring a variable in C++
    int FileSize = 100;
    double Sales = 9.9393;

    // printing a variable
    std::cout << FileSize << " " << Sales << endl; 
    /* endl = \n do the same thing that is to end the line usage depends upon the user.
    if we don't type using namespace std then we have to write std::endl to do the same.
    */
    
    // creating a constant variable 
    const float pi = 3.1473;

    // simple mathematics operations 
    double a = 10,b=5, sum, sub, mul,div, mod;
    int c = 5, d =20;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = d % c; // used to get the remainder called modulas operator 
    cout << "The sumation, subtraction, multiplication and division of "<< a << " and " << b << "\n";
    cout << sum << " " << sub << " " << mul << " " << div << endl;
    
    // taking input from console
    int value;
    cout << "Enter a value:\n";
    cin >> value;

    // taking multiple values
    int v1 , v2 ,v3;
    cout << endl << "Enter values: \n";
    cin >> v1 >> v2 >> v3;
    return 0;  
}
/*
Camel case     : myVariable
snake case     : my_variable
pascale case   : MyVaraible
hungarian case : iMyVariable : this was used in old times to specify the data type of a variable, it is not relevent anymore
Variable       : is a memory location for storing any information
comments       : are used for documentation comments don't get compile but add line to the code.
cout           : standard output stream
<<             : stream insertion operator
>>             : stream extraction operator


*/