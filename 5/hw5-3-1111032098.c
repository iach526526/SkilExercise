#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
/*
��J���Z�A�P�_��J���Z����0~100�����A��J���Z�Y��40~59���A
�L�X���ݭn�ɦҡI���A��J���Z�Y��0~39���A�L�X�����Z���ή�I��
*/ 
int main()
{
	int grade;
	printf("��J���Z");
	scanf("%d",&grade);
	assert(grade>=0&&grade<=100);//�P�_��J�Ȧ��S���W�X���Z�d��A�Y�W�X�A�h�����{���C�H�K�o�͹w�Ƥ��~���~ 
	if(grade>=0&&grade<40)
	{
		printf("���Z���ή�");
	}
	else if(grade>=40 &&grade<=59)
	{
		printf("�ݭn�ɦҡI");
	}
}
