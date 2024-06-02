//試利用長方體的長、寬及高建立一個結構，並將該結構值傳入函數，計算並傳回體積。
#include <iostream>
#include <cstdlib>
using namespace std;
struct ret{
    int length;
    int width;
    int height;
};
int main()
{
    struct ret someret;
    cin >> someret.length >> someret.width >> someret.height;
    cout << someret.length * someret.width * someret.height << endl;
    system("pause");
}