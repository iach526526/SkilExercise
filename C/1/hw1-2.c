//hw2���X���Ѫ���� 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> //���o�ɶ��Ϊ��禡�w 
int main()
{
	time_t t;
	struct tm *p;//�ŧi�@��tm���O������ 
	//tm��time.h�������c 
	int mon = 0, mday = 0;
	
	time(&t);
	p = localtime(&t); 
	//���o�ɶ� 
	mon = 1 + p->tm_mon;
	mday = p->tm_mday;
	printf("Hello�IToday is %d.%d", mon, mday);//�L�X 
	
	return 0;
}
