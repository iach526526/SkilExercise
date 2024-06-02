#include <iostream>
using namespace std;
double trapezoid(int upper, int base, int height) {//上底,下底,高
    return (double)(upper + base) * height / 2;
}

double trapezoid(double upper, double base, double height) {
    return (upper + base) * height / 2;
}

int main() {
    //多載整數
    int intUpper;
    int intBase;
    int intHeight;
    cout << "Enter the upper base(integer): ";
    cin >> intUpper;
    cout << "Enter the lower base(integer): ";
    cin >> intBase;
    cout << "Enter the height(integer): ";
    cin >> intHeight;

    //多載雙精度浮點數
    double doubleUpper;
    double doubleBase;
    double doubleHeight;
    cout << "Enter the upper base (double): ";
    cin >> doubleUpper;
    cout << "Enter the lower base (double): ";
    cin >> doubleBase;
    cout << "Enter the height (double): ";
    cin >> doubleHeight;

    double intResult = trapezoid(intUpper, intBase, intHeight);
    double doubleResult = trapezoid(doubleUpper, doubleBase, doubleHeight);

    cout << "Integer result: " << intResult << endl;
    cout << "Double result: " << doubleResult << endl;

    return 0;
}