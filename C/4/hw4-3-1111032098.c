#include <stdio.h>
#include <stdlib.h>
/*
��J�r��]�w25�Ӧr���A�L�X"No more goodbye"�C
*/ 
int main()
{
	char OutStr[26];
	//�i�e��25�� �r���A�̫�@�ө�\0��ܵ����A26�ӪŶ� 
	scanf("%[^\n]s",&OutStr);//Ū�촫�� 
	printf("%s",OutStr);
	return 0;	
 } 
