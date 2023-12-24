#include <stdio.h>
#include <stdlib.h>
//進制轉換 
/*
請以C語言撰寫，由鍵盤輸入一個十六進位整數，印出該整數的八進位和十進位。
請以C語言撰寫，由鍵盤輸入一個八進位整數，印出該整數的十進位和十六進位。
*/ 
int main()
{
	//輸入16進位輸出它的8 、10進位 
	int Num;
	printf("enter a hex num:"); 
	scanf("%x",&Num);
	printf("dec:%09d\noct:%09o\n",Num,Num);//九個欄位，自動補0，對齊又美觀 
	////輸入8進位輸出它的16 、10進位 
	printf("enter a oct num:"); 
	scanf("%o",&Num);
	printf("dec:%09d\nhex:%09x\n",Num,Num);//九個欄位，自動補0，對齊又美觀 
	
 } 
