//��J�@���}�C����N�A��JN�����Z��ƫ�p�����ܥ������Z�C
#include <stdio.h>
#include <stdlib.h>
int* input(int count)
{
	
	int arrLen=1;
	int *go_array=(int*)malloc(1 * sizeof(int));
	printf("��J�Ʀr���`�M:\n�ХΪŮ�j�}\n");
	int i;
	for(i=0;i<count;i++) 
	{
		
		scanf("%d",&go_array[i]);
		go_array =(int*) realloc(go_array , arrLen+1 * sizeof(int));
		arrLen++;
	}
	return go_array;
 }
 int ADDALL(int *arr,int max)
 {
 	int sum=0;
 	int i;
 	for(i=0;i<max;i++)
 	{
 		sum+=arr[i];
	 }
	 return sum;
 }
int main()
{
	int n;//��Ƶ���
	scanf("%d",&n);
	
	int *scores=input(n);
	int total=ADDALL(scores,n);
	printf("%lf",(double)total/n);
 } 
