//試撰寫一程式，宣告一字元陣列a，利用迴圈為陣列設值為A~Z
#include <iostream>
using namespace std;
int main()
{
    char a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=i+65;
        cout<<a[i]<<" ";
    }
}