#include <stdio.h> 
#include <stdlib.h>
/*輸入平行四邊形底和高，計算其面積。*/
int main(){
	int bottom,height;
	printf("輸入平行四邊形底和高:");
	scanf("%d%d",&bottom,&height);//輸入底和高 
	printf("area:%d\n",bottom*height);//輸出面積 
	system("pause");
	return 0;
} 
