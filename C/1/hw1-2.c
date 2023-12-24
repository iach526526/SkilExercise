//hw2打出今天的日期 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> //取得時間用的函式庫 
int main()
{
	time_t t;
	struct tm *p;//宣告一個tm型別的指標 
	//tm為time.h內的結構 
	int mon = 0, mday = 0;
	
	time(&t);
	p = localtime(&t); 
	//取得時間 
	mon = 1 + p->tm_mon;
	mday = p->tm_mday;
	printf("Hello！Today is %d.%d", mon, mday);//印出 
	
	return 0;
}
