#include <stdio.h>
#include <stdlib.h>
//�i���ഫ 
/*
�ХHC�y�����g�A����L��J�@�ӤQ���i���ơA�L�X�Ӿ�ƪ��K�i��M�Q�i��C
�ХHC�y�����g�A����L��J�@�ӤK�i���ơA�L�X�Ӿ�ƪ��Q�i��M�Q���i��C
*/ 
int main()
{
	//��J16�i���X����8 �B10�i�� 
	int Num;
	printf("enter a hex num:"); 
	scanf("%x",&Num);
	printf("dec:%09d\noct:%09o\n",Num,Num);//�E�����A�۰ʸ�0�A����S���[ 
	////��J8�i���X����16 �B10�i�� 
	printf("enter a oct num:"); 
	scanf("%o",&Num);
	printf("dec:%09d\nhex:%09x\n",Num,Num);//�E�����A�۰ʸ�0�A����S���[ 
	
 } 
