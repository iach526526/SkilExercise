#include <iostream>
using namespace std;
int main()
{
    int a,b;
    for(a=2;a<=9;a++)
    {
        
        for(b=1;b<=9;b++)
        {
            cout<<a<<"*"<<b<<"="<<a*b<<"\t";
        }
        cout<<endl;
    }
    a=2;b=1;
    while (a<=9)
    {
        b=1;
        while (b<=9)
        {
            cout<<a<<"*"<<b<<"="<<a*b<<"\t";
            b++;
        }
        cout<<endl;
        a++;
    }

    a=2;b=1;
    do
    {
        b=1;
        do
        {
            cout<<a<<"*"<<b<<"="<<a*b<<"\t";
            b++;
        } while (b<=9);
        cout<<endl;
        a++;
    }while(a<=9);
}