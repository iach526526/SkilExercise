//��J�@���}�C10�Ӥ����A�ЦL�X�Ƨǫe�M�Ƨǫᵲ�G�A�C���j�M�]�ЦL�X
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
 
