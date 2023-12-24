//二維陣列A進行轉置矩陣(Transpose)
#include <stdio.h>
#include <stdlib.h>
//可使用巨集跳過輸入行列 
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
	printf("你輸入了:\n");
	int r,c;
	for (r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("%d ",arr[r*col+c]);//用記憶體偏移取索引 
		}
		printf("\n");
	}
	
}
void REVERSEmatrix(int *arr,int row,int col)
{
	printf("顛倒:\n");
	int r,c;
	for (c=0;c<col;c++)
	{
		for(r=0;r<row;r++)
		{
			printf("%d ",arr[r*col+c]);//用記憶體偏移取索引 
		}
		printf("\n");
	}
	
}
int main()
{
	int ROWS,COLS;
	printf("輸入行數:");scanf("%d",&ROWS);
	printf("輸入列數:");scanf("%d",&COLS);
	
	int A[ROWS][COLS];
	INPUTmatrix(A,ROWS,COLS);
	PRINTmatrix(A,ROWS,COLS);//輸出某陣列，除錯用 
	REVERSEmatrix(A,ROWS,COLS); 
	return 0;
}
