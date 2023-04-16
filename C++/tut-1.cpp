

// using array to store data in object
#include <iostream>
using namespace std;

class Shop
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() // used to initialize a variable 
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter ID of the item number " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of the item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price for item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    for(int i = 0; i < 3;i++ )
    {
        dukan.setPrice();
    }
  
    dukan.displayPrice();

    return 0;
}
