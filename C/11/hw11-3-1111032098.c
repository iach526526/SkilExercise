#include<stdio.h>
#include<stdlib.h>
#include <assert.h>
//�إߦۦ��J�`�I���쵲��C�A�æۦ��J�`�I����ơA�ئn����A�бN����쵲��C�C�L�X�ӡC
typedef struct Train 
{
	int good;
	struct Train *next;
}train;

train *Creat(int len)
{
	int i;
	train *now,*HEAD,*pr;
	//now:�j�鲣�ͪ��s�쵲
	//HEAD:�����Y 
	//�W�@�Ӹ`�In�A��ЫؤU�@��(n+1)�`�I�|��n���U�@�ӳs��(n+1)�h 
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
		printf("��%d�Ӹ`�I:%d\n",counter,node->good);
		counter+=1;
	}
 } 
int main()
{
	printf("��J�Ŷ��j�p:");
	int space;
	scanf("%d",&space);
	LinkStart(Creat(space)); 
}
