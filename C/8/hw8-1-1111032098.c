//�ХHC�y�����g�A���]�b�{���X�̦��p�U���ԭz�G
//
//         float num=12.6f,*ptr;
//         ptr=&num;
//
//�C�L�X�ܼ�num�P�����ܼ�ptr����}�A�å�ӹ�10.2.1ø�X�ܼƩ�O���餺���t�m���ΡC
#include <stdio.h>
int main()
{
	float num=12.6f,*ptr;
    ptr=&num;
    printf("num's address:%p\nptr's address:%p",num,ptr);
 } 
