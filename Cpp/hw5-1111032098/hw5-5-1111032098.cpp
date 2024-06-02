#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    // Reverse str string
    reverse(str.begin(), str.end());
    cout << str;
}