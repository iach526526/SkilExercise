#include<stdio.h>
#include<stdlib.h>
#include <assert.h>
//建立自行輸入節點的鏈結串列，並自行輸入節點的資料，建好之後，請將整個鏈結串列列印出來。
typedef struct Train 
{
	int good;
	struct Train *next;
}train;

train *Creat(int len)
{
	int i;
	train *now,*HEAD,*pr;
	//now:迴圈產生的新鏈結
	//HEAD:火車頭 
	//上一個節點n，當創建下一個(n+1)節點會把n的下一個連到(n+1)去 
	assert(now!=NULL);
	assert(HEAD!=NULL);
	assert(pr!=NULL);
	for(i=0;i<len;i++)
	{
		now=(train *) malloc(sizeof(train));
		scanf("%d",&(now->good));
		if(i==0)
		{
			HEAD=now;
		}
		else
		{
			pr->next=now;
		}
		now->next=NULL;
		pr=now;
		
	}
	return HEAD;
}
void LinkStart(train *node)
{
	int counter=0;
	for(;node!=NULL;node=node->next)
	{
		printf("第%d個節點:%d\n",counter,node->good);
		counter+=1;
	}
 } 
int main()
{
	printf("輸入空間大小:");
	int space;
	scanf("%d",&space);
	LinkStart(Creat(space)); 
}
