/*請利用共同空間型態，於程式中宣告下列的人事結構型態。
姓名：字串型態
人事代號：字串型態
此外，還依照填寫者的性別而有不同的欄位：女性填入中文打字速度，男性則填是否役畢。
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

union sks{
    short typingSpeed;
    bool Service;
}skill;
struct person{
    string name;
    string id;
};

int main()
{
    struct person sbd;
    getline(cin,sbd.name);
    getline(cin,sbd.id);
    bool male;
    cout<<"male:";
    cin >> male;
    if (male)//man
    {
        cout<<"Service:";
        cin >> skill.Service;
    }
    else//woman
    {
        cout<<"typing speed:";
        cin >> skill.typingSpeed;
    }
}