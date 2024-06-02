/*
利用typedef定義一個點在（x,y）座標上的位置之結構，
其結構成員包括x座標值與y座標值，並利用此結構求出兩點之間的距離。
請將程式空白的部分填入正確的答案。
*/

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
typedef struct
{
   double x;
   double y;
} point;
int main(void)
{
   double square;
   point p1,p2;
   p1.x=p1.y=0;
   p2.x=0;
   p2.y=3;
   cout << "p1=(" <<  p1.x << "," <<  p1.y   << "), ";
   cout << "p2=(" <<  p2.x  << "," <<  p2.y  << ")" << endl;
   square=pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2);
   cout << "distance(p1,p2)=" << sqrt(square) << endl;
   system("pause");
   return 0;
}