#include <stdio.h>//include拼錯 、 stuio=>stdio 
#include <stdlib.h>//include拼錯、 stulib=>stdlib
int main(void)
{
   int i=5;//i 前面要有資料型別 
   printf("i = %d" , i);//printf拼錯，printf第一個參數要用""包起來、格式字元有誤:%c=>%d，使用未定義變數O  
   
   system("pause");//pause要用括號包起來 
   return 0;//要加分號 
}
