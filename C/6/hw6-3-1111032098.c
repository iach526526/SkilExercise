#include <stdio.h>
#include "area.h"

int main()
{
	double r=2;//��J�� 
	printf("��J��b�|:");
	scanf("%.2lf",&r);
	double w,h;//��J����� 
	printf("��J����μe�B��:");
	scanf("%lf%lf",&w,&h);
	double b,th;//��J�T���� 
	printf("��J�T���Ω��B��:");
	scanf("%lf%lf",&b,&th);
	//�p�⵲�G 
	printf("\n��:%lf\n�����:%lf\n�T����:%lf",CIR(r),RT(w,h),TA(b,th));
	return 0;
}
