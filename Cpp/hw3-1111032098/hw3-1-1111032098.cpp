#include <iostream>

using namespace std;

void power(int& base, int exponent, int& result) {
    result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
}

int main() {
    int x, n, result;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;
    power(x, n, result);
    cout << x << " raised to the power " << n << " is: " << result << endl;
    return 0;
}