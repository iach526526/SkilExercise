#include <iostream>
using namespace std;
int main() {
    int arr[3][3][3]={{{1,2,3},{4,5,6},{7,8,9}}
                       ,{{10,11,12},{13,14,15},{16,17,18}}
                       ,{{19,20,21},{22,23,24},{25,26,27}}};
    int sum=0;
    for(int L1=0;L1<3;L1++)
    {
        for(int L2=0;L2<3;L2++)
        {
            for(int L3=0;L3<3;L3++)
            {
                cout<<arr[L1][L2][L3]<<" ";
                sum+=arr[L1][L2][L3];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"sum:"<<sum<<endl;
}