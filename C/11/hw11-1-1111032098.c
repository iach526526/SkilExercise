#include <stdio.h>
#include <stdlib.h>
#define sp 3
int main()
{
	//��J�T�ӼƩ�J�}�C
	double *SPACE=malloc(sp*sizeof(double));
	int i;
	for(i=0;i<sp;i++)
	{
		printf("\n��J���N�Ʀr:");
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
