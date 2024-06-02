//試撰寫一do-while迴圈程式，輸入全班同學的成績並計算平均值，當成績為-1時即結束輸入。學生人數最多設定為6個。
#include <iostream>
using namespace std;
int main(){
    int i=0;
    int sum=0;
    int score;
    do{
        cout<<"input student "<<i+1<<" score";
        cin>>score;
        if(score==-1){
            break;
        }
        sum+=score;
        i++;
    }while(i<6);
    cout<<"AVG:"<<sum/i<<endl;
    return 0;
}