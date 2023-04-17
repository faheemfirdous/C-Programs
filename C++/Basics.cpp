// C++ programmig 


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

    // working with different number types 
    // we can simply type decimal numbers but for binary we first type "0b" then a binary number and for a hexa decimal number we use prefix "0x" then any hexa decimal number.
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

// inline function 
/*
during compile-time inline function replaces the calling statement in
main function with the actual function inorder to reduce process and 
compile time. we have to use "inline" keyword while defing the function.
moreover it is not necessary that if we write inline and compiler will replace
all the functions call with function it is upto compiler to decide 
syntax
inline {{data-type}} {{function-name}}(arg1, arg2)
{
    // code //
}
*/

// static variable
/*
are used in a function whose work is to initialize a variable only once 
in that funciton or loop mainly used in recurssive funcitons and not
recommended to use with inline function
*/

//Static Member Function
/*
just like static variable static member function are those function which
once declared its memory can't be changed these fucntions are not associated 
with the objects of the classes every object points to the same memory.
*/
// default arguments
/*
int function(int a=32, char s='a')
{
    //  code  //
}
these will be default values of the function and if we will pass some other 
values then they will get replaced
*/

// constant arguments
/*
int function(const int a=0, const float pi=32.33)
{
    //  code //
}
the value of the arguments won't get changed throughout the code even if 
we will pass some arguments compiler will show error
*/
