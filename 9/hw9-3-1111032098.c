//請以C語言撰寫一程式，修改prog11_7，宣告一個具有5個元素的結構陣列student，
//並於程式碼裡設定初值給陣列元素，並依下列的敘述進行程式設計：
//
//(a)試撰寫一函數struct data best(struct data student[])，
//可接收結構陣列student，傳回值則為成績最高分的結構陣列元素。
//
//(b)試撰寫一函數void failed(struct data student[])，
//可接收結構陣列student，並於函數裡列印出所有成績不及格之學生姓名與分數（60分為及格）。
//
//(c)試撰寫一函數double average(struct data student[])，
//可接收結構陣列student，傳回值則為成績的平均值。
//
//(d)試撰寫一函數void sort(struct data student[])，
//可接收結構陣列student，並於函數裡將陣列元素排列。分數越高者排列越前面。
#include <stdio.h>
#define SIZE 5
struct student
{
	int score;
	char name[10];
};typedef struct student man;
double average(man sts[])
{
	int i;
	double total=0;
	for(i=0;i<SIZE;i++)
	{
		total+=sts[i].score;
	}
	return total/i;
}
man best(man sts[])//回傳成績最高分的結構陣列元素
{
	man maxS=sts[0];
	int i;
	for (i=1;i<SIZE;i++)
	{
		if(sts[i].score>maxS.score)maxS=sts[i];
	}
	return maxS;
}
void failed(man sts[])//不及格名單
{
	printf("\n不及格名單:\n");
	int i;
	for(i=0;i<SIZE;i++)
	{
		if(sts[i].score<60)
		{
			printf("%s %d分\n",sts[i].name,sts[i].score);
		} 
		 
	}
	printf("-----------\n");
}
void sort(man arr[])
{
	int i,j;
	for(i=0;i<SIZE-1;i++)
	{
		int breakflag=1;
		for(j=0;j<SIZE-i-1;j++)
		{
			if(arr[j].score<arr[j+1].score)
			{
				man temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				breakflag=0;
			}
			
		}
		if (breakflag)
		{
			break;
		}
	}
}
int main()
{
	man sts[SIZE]={{56,"AAA"},{90,"BB"},{45,"CC"},{30,"DD"},{100,"LL"}};
	printf("%d",best(sts).score);
	printf("\n最高分%d%s\n",best(sts).score,best(sts).name);
	failed(sts);
	printf("\n平均%lf",average(sts));
	sort(sts);//sort了 
	return 0;
}
