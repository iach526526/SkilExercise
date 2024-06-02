#include <iostream>
using namespace std;


void count(int arr[],int size)
{
    int odd,even;
    odd=even=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"odd:"<<odd<<endl;
    cout<<"even:"<<even<<endl;
}
int main()
{
    int numbers[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0;i<sizeof(numbers)/sizeof(numbers[0]);i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    count(numbers,i);
}