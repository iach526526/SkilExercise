#include <iostream>

using namespace std;

double factor(int n) {
    int i=1,sum=0,st=1;
    do
    {
        st*=i;
        sum+=st;
        i++;
    } while (i<=n);
    return sum;
}

int main() {
    int n=3;
    cout<<factor(3);
}