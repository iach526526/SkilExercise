//1111032098-1 
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
//	printf("\n������:%lf",(double)total/rCOUNT);
	//������ 
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
	Rfile=fopen("./rand.txt","r");//Ū�@�ӥΪŮ�j�}�C�ռƦr���ɮ� 
	int i;
	char c;
	int sum=0;
	while ((c=getc(Rfile))!= EOF)
	{
		int temp;
		if (c >='0'&& c<='9')
		{
			temp=c-'0';
			while ((c=getc(Rfile))>='0' && c<='9')//�p�G�O�Ʀr�r���A�N�⥦�নint�s�Jtemp 
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
		int *rnadList=GEN_RANDOM(rCOUNT);//���Ͷüư}�C 
		Writenum(randTXT,rnadList);//�g�J�ɮ� 
		fclose(randTXT);
		free(rnadList);
		
		//Ū���ɮ�
		printf("������:%.3lf",(double)Read()/rCOUNT);
		
		return 0;
	}
	else
	{
		printf("error");
		return 1;
	}
 } 
