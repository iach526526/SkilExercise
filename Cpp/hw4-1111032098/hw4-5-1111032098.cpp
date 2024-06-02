#include <iostream>
#include "head_math.h"

using namespace std;
int main()
{
    //由鍵盤輸入計算梯形所需要的資料後，計算梯形面積。
    double upper, base, height;
    cin >> upper >> base >> height;
    cout<<TRADEZOID(upper, base, height)<<endl;
}