// vector container 
/*
vector is like an array and is a component of STL so we have to include
its library.
vectors has undefinate size that is we can add as much 
elements we want to add without worry to increase its size
it is actually an class template so it has similar syntax 
syntax to create a vector
vector <{{data-type}}> {{name-of-object}}
*/

#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++) // size() method gets the size of vector
    {
        cout << v[i] << endl;
    }
    
}

int main()
{
    vector<int> vec1;
    int element; 
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter an element: " << endl;
        cin >> element;
        vec1.push_back(element); // adding elements to vector
    }
    
    return 0;
}