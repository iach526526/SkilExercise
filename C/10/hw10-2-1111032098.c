//1111032098-2
#include <stdio.h>
#include <stdlib.h>
#define rCOUNT 10
int *GEN_RANDOM(int num)
{
	srand(time(0));//設定亂數種子
	int *arr = (int *)malloc(num * sizeof(int));
	int i;
//	int total=0;
	for(i=0;i<num;i++)
	{
		arr[i]=(rand()%64)+1;//產生1~64隨機亂數 
		printf("%d ",arr[i]);
//		total+=arr[i];
	}
	printf("\n");
//	printf("\n平均值:%lf",(double)total/rCOUNT);
	//偵錯用 
	return arr;
}
void Writenum(FILE *Wfile,int *WrList)//要寫入的檔案;寫入內容陣列 
{
	fwrite(WrList,sizeof(int),rCOUNT,Wfile);
}
int Read()
{
	int arr[rCOUNT];
	FILE *Rfile = fopen("./BINrand.bin", "rb");
	fread(arr,sizeof(int),rCOUNT,Rfile);
	//find adv
	int k,sum=0;
	for(k=0;k<rCOUNT;k++)
	{
		sum+=arr[k];
	}
	//Find max
	int i,max=arr[0];
	for(i=0;i<rCOUNT;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	//Find min
	int j,min=arr[0];
	for(i=0;i<rCOUNT;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	printf("===============\n");
	printf("平均值:%lf\n最大值:%d\t最小值:%d",(double)sum/rCOUNT,max,min);
	fclose(Rfile);
 }
int main()
{
	FILE *randTXT;
	randTXT=fopen("BINrand.bin","wb");
	
	if(randTXT!=NULL)
	{
		int *rnadList=GEN_RANDOM(rCOUNT);//產生亂數陣列 
		Writenum(randTXT,rnadList);//寫入檔案 
		fclose(randTXT);
		free(rnadList);
		
		//讀取檔案
		Read();
		
		return 0;
	}
	else
	{
		printf("error");
		return 1;
	}
 } 
