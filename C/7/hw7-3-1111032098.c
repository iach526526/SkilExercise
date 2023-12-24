//輸入一維陣列10個元素，請印出排序前和排序後結果，每次搜尋也請印出
#include <stdio.h>
#define ARRSIZE 10
void PRINTmatrix(int *a,int SIZE)
{
	static count=0;
	printf("%d\t",count);
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);
	}
	count++;
	printf("\n");
}
void bob(int *arr,int SIZE)
{
	int i,j;
	for(i=0;i<SIZE-1;i++)
	{
		for(j=0;j<SIZE-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			PRINTmatrix(arr,SIZE);
		}
	}
}
int main()
{
	int a[ARRSIZE];
	int i;
	for(i=0;i<ARRSIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	bob(a,ARRSIZE);
 } 
 
