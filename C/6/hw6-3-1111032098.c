#include <stdio.h>
#include "area.h"

int main()
{
	double r=2;//輸入圓 
	printf("輸入圓半徑:");
	scanf("%.2lf",&r);
	double w,h;//輸入長方形 
	printf("輸入長方形寬、高:");
	scanf("%lf%lf",&w,&h);
	double b,th;//輸入三角形 
	printf("輸入三角形底、高:");
	scanf("%lf%lf",&b,&th);
	//計算結果 
	printf("\n圓:%lf\n長方形:%lf\n三角形:%lf",CIR(r),RT(w,h),TA(b,th));
	return 0;
}
