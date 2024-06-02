// 試撰寫一程式，利用列舉型態當使用者輸入1~7的整數時，才印出相對應的星期，如輸入5，印出星期五的英文Friday。
#include <iostream>
#include <cstdlib>
using namespace std;
enum week{
    Monday= 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday 
};
int main()
{
    enum week day;
    int input;
    cin >> input;
    day=static_cast<week>(input); //把input轉成列舉型態
    switch (day)
    {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3: 
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break; 
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<< "Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
    }
}