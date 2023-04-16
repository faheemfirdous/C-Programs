/*
objects in an array
*/

#include<iostream>
using namespace std;

class shopItem
{
private:
    int id, price;

public:
    void getData()
    {
        cout << "Code of this item is " << id << endl
             << "Price of this item is " << price << endl;
    }
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
};

int main()
{
    int size = 2; 
    shopItem *ptr = new shopItem[size]; // this statement will create an 
                                        // arry of size 4 and pointer ptr 
                                        // will point to the first obj at 0th place
    int id, price;
    shopItem *ptrTemp = ptr; // this will store the 0th place of arry
    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and price of item " << i+1 << endl;
        
        cin >> id >> price;
        ptr ->setData(id, price);
        ptr ++;
    }
    ptr = ptrTemp; // This will set the value of ptr to point 0th place
    for (int i = 0; i < size; i++)
    {
        cout << "Iten number: " << i+1 << endl;
        ptr -> getData();
        ptr ++;
    }    
    
    return 0;
}