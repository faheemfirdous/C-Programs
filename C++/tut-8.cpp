// interest calculator using concept of 
// dynamically invoking constructor


#include<iostream>
using namespace std;
class BankDeposit
{
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;
public:
    BankDeposit(void){}
    BankDeposit(int p, int y, float r); // here r can be value like 0.04
    BankDeposit(int p, int y, int r); // here r can be value like 14 12
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue= returnValue * (1+r);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+r);
    }
}
void BankDeposit :: show()
{
    cout << endl << "Principal amount was " << principal << endl
         << "Return value after " << years 
         << " at the rate of " << interestRate << " interest" 
         << " is " << returnValue << endl;
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int R,p, y;
    float r;
    
    cout << "Enter principal amount " << endl;
    cin >> p;
    cout << "For how long you want to invest: " << endl;
    cin >> y;
    cout << "Enter rate of interest: " << endl;
    cin >> r;   // here interest rate is float so compiler will invoke fisrt constructor
    bd1 = BankDeposit(p,y,r);
    bd1.show();

    cout << "Enter principal amount " << endl;
    cin >> p;
    cout << "For how long you want to invest: " << endl;
    cin >> y;
    cout << "Enter rate of interest: " << endl;
    cin >> R; // here interest value is int so 
    bd2 = BankDeposit(p,y,R);
    bd2.show();
    
    return 0;
}