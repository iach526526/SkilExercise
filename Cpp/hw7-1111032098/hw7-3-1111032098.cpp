#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
class Caculator
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
        int sub(int a, int b)
        {
            return a-b;
        }
        int mul(int a, int b)
        {
            return a*b;
        }
        double div(double a, double b)
        {
            return a/b;
        }
};
int main()
{
    Caculator cal;
    cout<<cal.add(1,2)<<endl;
    cout<<cal.sub(1,2)<<endl;
    cout<<cal.mul(1,2)<<endl;
    cout<<cal.div(1,2)<<endl;
    return 0;
}