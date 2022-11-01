/*Calculate the total on purchases by adding 5% sales tax 
on every purchase and for teachers give 10% discount on purchase 
below 100 and for purchase greater than 100 give 12% and add tax after dicount  */
#include<iostream>

using namespace std;

int main()
{
    float purchase, total,discount,sales_tax,dis_purchase;
    int inp;
    cout << "Enter the amount: " << endl;
    cin >> purchase;
    cout << "Are you a teacher\nType 1 for YES and 2 for NO" << endl;
    cin >> inp;
    if(inp == 1)
    {
        if(purchase < 100)
        {
            discount = purchase * 0.1;
            dis_purchase = purchase - discount;
        }
        else if (purchase > 100)
        {
            discount = purchase * 0.12;
            dis_purchase = purchase - discount;   
        }
        sales_tax = purchase * 0.05;
        total = dis_purchase + sales_tax;
        cout << "\nTotal purchase = " << purchase 
             << "\nDiscount = " << discount
             << "\nTax on purchase = " << sales_tax
             << "\nTotal amount = " << total;
    }
    else if(inp == 2)
    {
        sales_tax = purchase * 0.05;
        total = purchase + sales_tax;
        cout << "\nTotal purchase = " << purchase 
             << "\nDiscount = 0"
             << "\nTax on purchase = " << sales_tax
             << "\nTotal amount = " << total;
    }
    else
    {
        cout << "Invalid input :(";
    }
    return 0;
}
