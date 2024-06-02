#include <iostream>
#include <string>
using namespace std;
int main() {
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int input;
    cout << "Enter a number between 1 and 12: ";
    cin >> input;

    if (input >= 1 && input <= 12) {
        cout << months[input - 1] << endl;
    } else {
        cout << "error" << endl;
    }

    return 0;
}