// write gcd function use by call by reference ,caculate the gcd of two number a and b and the answer will be store in the variable g
#include <iostream>
using namespace std;
void gcd(int a, int b, int& g) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    g = a;
}
int main() {
    int a, b, g;
    cin >> a >> b;
    gcd(a, b, g);
    cout << g << endl;
    return 0;
}