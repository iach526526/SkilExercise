#include <stdio.h>
#include <stdlib.h>
/*
輸入字串設定25個字元，印出"No more goodbye"。
*/ 
int main()
{
	char OutStr[26];
	//可容納25個 字元，最後一個放\0表示結束，26個空間 
	scanf("%[^\n]s",&OutStr);//讀到換行 
	printf("%s",OutStr);
	return 0;	
 } 
