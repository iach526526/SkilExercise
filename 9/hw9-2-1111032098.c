#include <stdio.h>
#define SIZE 5
//�ХHC�y�����g�A�ŧi�@�Ө㦳5�Ӥ��������c�}�Cstudent�A���c�}�C�������]�ȧ令�i����L��J�A�M�ἶ�g�������{���X�ӤU�C�U���G
//
//(a)    ���Z�̰������ǥͩm�W�P���ơC
//
//(b)    �Ҧ����Z���ή檺�ǥͩm�W�P���ơ]60�����ή�^�C
//
//(c)    ���Z�������ȡC

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
		printf("\n��J�ǥ�%d���Z:",i+1);
		scanf("%d",&sts[i].score);
		totalScore+=sts[i].score;//�⥭���� 
		printf("\n��J�ǥ�%d�m�W:",i+1);
		scanf("%s",sts[i].name);
		
	}
	//�̰���
	int maxS=sts[0].score;
	for(i=1;i<SIZE;i++)
	{
		if(sts[i].score>maxS)maxS=sts[i].score;
	}
	printf("�̰���:%d\n",maxS);
	//���ή椽��
	printf("���ή�W��:\n");
	for(i=0;i<SIZE;i++)
	{
		if(sts[i].score<60)
		{
			printf("%s %d��\n",sts[i].name,sts[i].score);
		} 
		 
	}
	printf("-----------\n");
	printf("����:%lf",(double)totalScore/SIZE);
	return 0;
}
