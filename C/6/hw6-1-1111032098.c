//Hw6-1
//����L��J�G�ӥ���ƫἶ�gint mod(int x, int y) ��ơA�p������x/y���l�ơC
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
