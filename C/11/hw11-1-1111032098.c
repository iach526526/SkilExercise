#include <stdio.h>
#include <stdlib.h>
#define sp 3
int main()
{
	//輸入三個數放入陣列
	double *SPACE=malloc(sp*sizeof(double));
	int i;
	for(i=0;i<sp;i++)
	{
		printf("\n輸入任意數字:");
		scanf("%lf",&SPACE[i]);
	 } 
	 
	double total=0;
	for(i=0;i<sp;i++)
	{
		total+=SPACE[i];
	}
	printf("SUM:%.2lf\nAVG:%.4lf",total,total/sp);
	free(SPACE);
	return 0;
	
 } 
