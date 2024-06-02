#include <iostream>

using namespace std;


int fib(int n) {
    if (n == 1 || n == 2)
        return 1; // Base cases: f_1 = 1, f_2 = 1
    else
        return fib(n - 1) + fib(n - 2); // Recursive step
}


int main() {
    int n;

    cin >> n;

    cout<<"The factorial of  "<<n<<" is: "<<fib(n)<<endl;


    return 0;
}