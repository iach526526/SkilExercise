#include <iostream>
#include <cmath>

using namespace std;

double compoundInterest(double p, double rate, int years) {
    return p * pow(1 + rate, years);
}

int main() {
    double p, rate;
    int years;

    cout << "Enter  p: ";//本金
    cin >> p;

    cout << "Enter r: ";//利息
    cin >> rate;

    cout << "Enter the number of years (n): ";
    cin >> years;

    double total = compoundInterest(p, rate, years);

    cout << "Ttotal " << total << endl;

    return 0;
}