//hw9-1
//
//�ХHC�y�����g�A�̤U�C���D�ا@���G
//
//(a)�ռ��g�@�{���A�إߤ@������cdate�A�䦨���]�Ayear�]�~���^�Bmonth�]����^��day�]����^�A���A�Ҭ���ơC
//
//(b)�ŧi�@�ӵ��cdate���A���ܼ�holiday�A�ó]�w��Ȭ� {2023, 12, 9}�C
//
//(c)�ŧi�@�ӵ��cdate���A���ܼ�festival�A�åi����L��J�ƭȨӳ]�w�ܼ�festival��year������2023�Bmonth������12�Pday������24�C
//
//(d)�Hmm/dd/yyyy���榡�L�X���choliday�Pfestival���ȡCmm�N�����A����2��Fdd�N�����A����2��Fyyyy�N��~���A����4��A�p12/09/2023�C
//
//(e)���cdate���A���ܼƦ��F�h�֭Ӧ줸�աH
#include <stdio.h>
struct date{
	int year;
	int month;
	int day;
};
void PRINTDATE(int m,int d,int y,char *c)
{
	printf("\n%s:%2d/%2d/%4d",c,m,d,y);
}
int main()
{
	typedef struct date date;
	char *txt[]={"holiday","festival"};
	//b�Bc 
	date holiday={2023, 12, 9},festival;
	printf("��Jyear�Bmonth��day:");
	scanf("%d%d%d",&festival.year,&festival.month,&festival.day);
	PRINTDATE(festival.month,festival.day,festival.year,txt[1]);
	PRINTDATE(holiday.month,holiday.day,holiday.year,txt[1]);
	return 0;
}
