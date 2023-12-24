//1111032098-1 
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
//	printf("\n平均值:%lf",(double)total/rCOUNT);
	//偵錯用 
	return arr;
}\
void Writenum(FILE *Wfile,int *WrList)
{
	int i;
	for (i=0; i<rCOUNT;i++)
    {
        fprintf(Wfile, "%d ", WrList[i]);
    }
}
int Read()
{
	FILE *Rfile;
	Rfile=fopen("./rand.txt","r");//讀一個用空格隔開每組數字的檔案 
	int i;
	char c;
	int sum=0;
	while ((c=getc(Rfile))!= EOF)
	{
		int temp;
		if (c >='0'&& c<='9')
		{
			temp=c-'0';
			while ((c=getc(Rfile))>='0' && c<='9')//如果是數字字元，就把它轉成int存入temp 
			{
	            temp=temp*10+ (c-'0');
	        }
		}
		sum+=temp;
		
	}
	return sum;
	
 } 
int main()
{
	FILE *randTXT;
	randTXT=fopen("rand.txt","w");
	
	if(randTXT!=NULL)
	{
		int *rnadList=GEN_RANDOM(rCOUNT);//產生亂數陣列 
		Writenum(randTXT,rnadList);//寫入檔案 
		fclose(randTXT);
		free(rnadList);
		
		//讀取檔案
		printf("平均值:%.3lf",(double)Read()/rCOUNT);
		
		return 0;
	}
	else
	{
		printf("error");
		return 1;
	}
 } 
