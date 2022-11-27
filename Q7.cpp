#include<iostream>

using namespace std;

int main()
{
	float cost_price,sell_price;
	int loss,profit;
	
	cout << "Enter the cost price and selling price:\n";
	cin >> cost_price >> sell_price;
	if (cost_price > sell_price)
	{
		loss = cost_price - sell_price;
		cout << "You made a loss of " << loss << " this product.";
	}
	else if (cost_price < sell_price)
	{
		profit =  sell_price - cost_price;
		cout << "You made a loss of " << profit << " this product.";
	}
	return 0;
}
