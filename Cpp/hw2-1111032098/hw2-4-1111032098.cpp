#include <iostream>
#include <assert.h>
using namespace std;
/*
輸入成績，判斷輸入成績介於0~100之間，印出等第
*/
int main()
{
    int grade;
    cin >> grade;
    assert(grade >= 0 && grade <= 100); // 判斷輸入值有沒有超出成績範圍，若超出，則結束程式。以免發生預料之外錯誤
    if (grade >= 80 && grade <= 100)
    {
        cout << "A";
    }
    else if (grade >= 60 && grade <= 79)
    {
        cout << "B";
    }
    else if (grade >=0 and grade<=59)
    {
        cout<<"C";
    }
}