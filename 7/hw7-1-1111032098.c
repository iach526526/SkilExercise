//輸入一維陣列元素N，輸入N筆成績資料後計算並顯示平均成績。
#include <stdio.h>
#include <stdlib.h>
int* input(int count)
{
	
	int arrLen=1;
	int *go_array=(int*)malloc(1 * sizeof(int));
	printf("輸入數字算總和:\n請用空格隔開\n");
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
	int n;//資料筆數
	scanf("%d",&n);
	
	int *scores=input(n);
	int total=ADDALL(scores,n);
	printf("%lf",(double)total/n);
 } 
