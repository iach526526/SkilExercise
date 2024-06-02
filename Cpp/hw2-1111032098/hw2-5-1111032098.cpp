#include <iostream>
using namespace std;
int main()
{
    int N=-1; // 輸入N，奇術計算1+3+5+...N
    // 偶數計算2+4+6+..N
    cin>>N;
    if (N%2==1)
    {
        cout<<(1+N)*(N/2+1)/2;
    }
    else{
        cout<<(2+N)*(N/2)/2;

    }
}