//請定義巨集函數VOLUMN，傳入半徑，計算球體積。pi值請用#define定義成3.1415926。球體積=(4/3) * pi * r^3
#include <iostream>
using namespace std;
#define VOLUMN(r) (4.0 / 3.0 * 3.1415926 * r * r * r)
int main() {
    double r;
    cin >> r;
    cout << VOLUMN(r) << endl;
    return 0;
} 