//Hw6-1
//由鍵盤輸入二個正整數後撰寫int mod(int x, int y) 函數，計算並顯示x/y的餘數。
#include <stdio.h>
int mod(x,y)
{
	return x%y;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",mod(a,b));
}
