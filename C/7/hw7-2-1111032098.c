//�G���}�CA�i����m�x�}(Transpose)
#include <stdio.h>
#include <stdlib.h>
//�i�ϥΥ������L��J��C 
//#define ROWS 3
//#define COLS 4
void INPUTmatrix(int *arr,int row,int col)
{
	int r,c;
	for (r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			scanf("%d",&arr[r*col+c]);
		}
	}
	
}
void PRINTmatrix(int *arr,int row,int col)
{
	printf("�A��J�F:\n");
	int r,c;
	for (r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("%d ",arr[r*col+c]);//�ΰO���鰾�������� 
		}
		printf("\n");
	}
	
}
void REVERSEmatrix(int *arr,int row,int col)
{
	printf("�A��:\n");
	int r,c;
	for (c=0;c<col;c++)
	{
		for(r=0;r<row;r++)
		{
			printf("%d ",arr[r*col+c]);//�ΰO���鰾�������� 
		}
		printf("\n");
	}
	
}
int main()
{
	int ROWS,COLS;
	printf("��J���:");scanf("%d",&ROWS);
	printf("��J�C��:");scanf("%d",&COLS);
	
	int A[ROWS][COLS];
	INPUTmatrix(A,ROWS,COLS);
	PRINTmatrix(A,ROWS,COLS);//��X�Y�}�C�A������ 
	REVERSEmatrix(A,ROWS,COLS); 
	return 0;
}
