//�ХHC�y�����g�@�{���A�ק�prog11_7�A�ŧi�@�Ө㦳5�Ӥ��������c�}�Cstudent�A
//�é�{���X�̳]�w��ȵ��}�C�����A�è̤U�C���ԭz�i��{���]�p�G
//
//(a)�ռ��g�@���struct data best(struct data student[])�A
//�i�������c�}�Cstudent�A�Ǧ^�ȫh�����Z�̰��������c�}�C�����C
//
//(b)�ռ��g�@���void failed(struct data student[])�A
//�i�������c�}�Cstudent�A�é��Ƹ̦C�L�X�Ҧ����Z���ή椧�ǥͩm�W�P���ơ]60�����ή�^�C
//
//(c)�ռ��g�@���double average(struct data student[])�A
//�i�������c�}�Cstudent�A�Ǧ^�ȫh�����Z�������ȡC
//
//(d)�ռ��g�@���void sort(struct data student[])�A
//�i�������c�}�Cstudent�A�é��Ƹ̱N�}�C�����ƦC�C���ƶV���̱ƦC�V�e���C
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
man best(man sts[])//�^�Ǧ��Z�̰��������c�}�C����
{
	man maxS=sts[0];
	int i;
	for (i=1;i<SIZE;i++)
	{
		if(sts[i].score>maxS.score)maxS=sts[i];
	}
	return maxS;
}
void failed(man sts[])//���ή�W��
{
	printf("\n���ή�W��:\n");
	int i;
	for(i=0;i<SIZE;i++)
	{
		if(sts[i].score<60)
		{
			printf("%s %d��\n",sts[i].name,sts[i].score);
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
	printf("\n�̰���%d%s\n",best(sts).score,best(sts).name);
	failed(sts);
	printf("\n����%lf",average(sts));
	sort(sts);//sort�F 
	return 0;
}
