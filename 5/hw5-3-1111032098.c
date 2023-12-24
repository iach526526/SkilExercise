#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
/*
輸入成績，判斷輸入成績介於0~100之間，輸入成績若為40~59分，
印出”需要補考！”，輸入成績若為0~39分，印出”成績不及格！”
*/ 
int main()
{
	int grade;
	printf("輸入成績");
	scanf("%d",&grade);
	assert(grade>=0&&grade<=100);//判斷輸入值有沒有超出成績範圍，若超出，則結束程式。以免發生預料之外錯誤 
	if(grade>=0&&grade<40)
	{
		printf("成績不及格");
	}
	else if(grade>=40 &&grade<=59)
	{
		printf("需要補考！");
	}
}
