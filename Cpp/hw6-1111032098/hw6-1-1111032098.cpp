#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct student{
    //學號,姓名,期中,期末,平時
    string id;
    string name;
    int mid;
    int final;
    int regular;
};
int main()
{
    struct student someBody;
    getline(cin,someBody.id);
    getline(cin,someBody.name);
    cin >>  someBody.mid >> someBody.final >> someBody.regular;
    //學期成績是以期中、期末考佔30%，平時成績佔40%計算
    int summery = someBody.mid*0.3 + someBody.final*0.3 + someBody.regular*0.4;
    cout<<"----------------------\n"<<someBody.id<<" "<<someBody.name<<"\nsummary "<<summery<<endl;
    cout<<"\nmiddle "<<someBody.mid<<"\nfinal "<<someBody.final<<"\nnormal "<<someBody.regular<<endl;
    system("pause");
}