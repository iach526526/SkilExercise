#include <iostream>

using namespace std;


int sum(int n) {//費式數列
    if (n == 1)
        return 1; 
    else
        return n + sum(n - 1); 
}


int st(int n) {//n!
    if (n == 0 || n == 1)
        return 1; 
    else
        return n * st(n - 1); 
}

int main() {
    int n;

    cin >> n;

    cout<<sum(n)<<endl;

    cout<<"n!"<<n<<" is: "<<st(n)<<endl;

    return 0;
}