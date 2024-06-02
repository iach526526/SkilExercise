#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
class CRet
{
    public:
        double weight=0;
        double height=-1;
        double width=-1;
        void set(double wg)
        {
            weight=wg;
        }
        void set(int w ,int h)
        {
            width=w;
            height=h;
        }
        void set(double wg,int w ,int h)
        {
            weight=wg;
            width=w;
            height=h;
        }
        void show()
        {
            cout<<weight<<" "<<width<<" "<<height<<endl;
        }
};
int main()
{
    CRet a;
    a.set(10.5);
    a.show();
    a.set(10,20);
    a.show();
    a.set(10.5,20,30);
    a.show();
    return 0;
}