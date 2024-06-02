#include <iostream>
using namespace std;
int main()
{
    float height, weight;
    cout << "height(meter) and weight";
    cin >> height >> weight;
    double BMI = (double)weight / (height * height);
    if (BMI >= 18.5 && BMI <= 24)
    {
        cout << "weight standard";
    }
    else if (BMI < 18.5)
    {
        cout << "weight to low";
    }
    else if (BMI > 24)
    {
        cout <<"weight to high";
    }
}