//請撰寫函數double triangle(int base, int height)，函數中印出底與高之值，並傳回三角形面績。預設的base值為2，height值為1。請分別計算triangle().triangel(10).triangle(12, 3)之值。
#include <iostream>
using namespace std;   
double triangle(int base = 2, int height = 1) {
    cout << "base: " << base << ", height: " << height << endl;
    return base * height / 2;
}  
int main()
{
    cout << "triangle(): " << triangle() << endl;
    cout << "triangle(10): " << triangle(10) << endl;
    cout << "triangle(12, 3): " << triangle(12, 3) << endl;
    return 0;
}