/*BMI calculator*/
#include<iostream>

using namespace std;

int main()
{
    int height, weight;
    cout << "Enter your weight and heigth: " << endl;
    cin >> height >> weight;
    float bmi = (703*weight)/(height*height);
    cout << "Your BMI is  " << bmi << endl;
    if(bmi < 18.5)
    {
        cout << "You are underweight.";
    }
    else if(bmi > 18.5 && bmi <24.9)
    {
        cout << "You are normal weight.";
    }
    else if(bmi > 25 && bmi <29.9)
    {
        cout << "You are over weight.";
    }
    else if(bmi > 30 )
    {
        cout << "You are obese.";
    }
    return 0;
}
