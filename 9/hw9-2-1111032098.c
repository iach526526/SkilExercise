#include <stdio.h>
#define SIZE 5
//請以C語言撰寫，宣告一個具有5個元素的結構陣列student，結構陣列元素之設值改成可由鍵盤輸入，然後撰寫相關的程式碼來下列各項：
//
//(a)    成績最高分的學生姓名與分數。
//
//(b)    所有成績不及格的學生姓名與分數（60分為及格）。
//
//(c)    成績的平均值。

struct student
{
	int score;
	char name[10];
};
int main()
{
	typedef struct student student;
	student sts[SIZE];
	int i,totalScore=0;
	for(i=0;i<SIZE;i++)
	{
		printf("\n輸入學生%d成績:",i+1);
		scanf("%d",&sts[i].score);
		totalScore+=sts[i].score;//算平均用 
		printf("\n輸入學生%d姓名:",i+1);
		scanf("%s",sts[i].name);
		
	}
	//最高分
	int maxS=sts[0].score;
	for(i=1;i<SIZE;i++)
	{
		if(sts[i].score>maxS)maxS=sts[i].score;
	}
	printf("最高分:%d\n",maxS);
	//不及格公布
	printf("不及格名單:\n");
	for(i=0;i<SIZE;i++)
	{
		if(sts[i].score<60)
		{
			printf("%s %d分\n",sts[i].name,sts[i].score);
		} 
		 
	}
	printf("-----------\n");
	printf("平均:%lf",(double)totalScore/SIZE);
	return 0;
}
