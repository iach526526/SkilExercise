//1111032098-2
#include <stdio.h>
#include <stdlib.h>
#define rCOUNT 10
int *GEN_RANDOM(int num)
{
	srand(time(0));//�]�w�üƺؤl
	int *arr = (int *)malloc(num * sizeof(int));
	int i;
//	int total=0;
	for(i=0;i<num;i++)
	{
		arr[i]=(rand()%64)+1;//����1~64�H���ü� 
		printf("%d ",arr[i]);
//		total+=arr[i];
	}
	printf("\n");
//	printf("\n������:%lf",(double)total/rCOUNT);
	//������ 
	return arr;
}
void Writenum(FILE *Wfile,int *WrList)//�n�g�J���ɮ�;�g�J���e�}�C 
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
	printf("������:%lf\n�̤j��:%d\t�̤p��:%d",(double)sum/rCOUNT,max,min);
	fclose(Rfile);
 }
int main()
{
	FILE *randTXT;
	randTXT=fopen("BINrand.bin","wb");
	
	if(randTXT!=NULL)
	{
		int *rnadList=GEN_RANDOM(rCOUNT);//���Ͷüư}�C 
		Writenum(randTXT,rnadList);//�g�J�ɮ� 
		fclose(randTXT);
		free(rnadList);
		
		//Ū���ɮ�
		Read();
		
		return 0;
	}
	else
	{
		printf("error");
		return 1;
	}
 } 
