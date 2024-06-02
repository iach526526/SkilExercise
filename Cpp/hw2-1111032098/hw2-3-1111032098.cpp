#include <iostream>
using namespace std;
int main()
{
    int month;
    cin >> month;
    if (month >= 3 && month <= 5)
    {
        cout << "sping";
    }
    else if (month >= 6 && month <= 8)
    {
        cout << "summer";
    }
    else if (month >= 9 && month <= 11)
    {
        cout << "fall";
    }
    else if (month%12>=0 && month%12<=2)
    {
        cout<<"winter";
    }
}