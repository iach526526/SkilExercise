#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
/*已知圓球體積公式，輸入圓球半徑，計算後輸出圓球體積。*/ 
int main(){
	int r;
	printf("輸入圓半徑");
	scanf("%d",&r);
	printf("%.4lf",4.0/3*M_PI*pow(r,3));//輸出面積(自動轉型) 
	return 0;
} 
