//hw9-1
//
//請以C語言撰寫，依下列的題目作答：
//
//(a)試撰寫一程式，建立一日期結構date，其成員包括year（年份）、month（月份）及day（日期），型態皆為整數。
//
//(b)宣告一個結構date型態的變數holiday，並設定初值為 {2023, 12, 9}。
//
//(c)宣告一個結構date型態的變數festival，並可由鍵盤輸入數值來設定變數festival的year成員為2023、month成員為12與day成員為24。
//
//(d)以mm/dd/yyyy的格式印出結構holiday與festival的值。mm代表月份，佔有2格；dd代表日期，佔有2格；yyyy代表年份，佔有4格，如12/09/2023。
//
//(e)結構date型態的變數佔了多少個位元組？
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
	//b、c 
	date holiday={2023, 12, 9},festival;
	printf("輸入year、month及day:");
	scanf("%d%d%d",&festival.year,&festival.month,&festival.day);
	PRINTDATE(festival.month,festival.day,festival.year,txt[1]);
	PRINTDATE(holiday.month,holiday.day,holiday.year,txt[1]);
	return 0;
}
