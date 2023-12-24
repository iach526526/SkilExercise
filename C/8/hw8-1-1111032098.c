//請以C語言撰寫，假設在程式碼裡有如下的敘述：
//
//         float num=12.6f,*ptr;
//         ptr=&num;
//
//列印出變數num與指標變數ptr的位址，並仿照圖10.2.1繪出變數於記憶體內的配置情形。
#include <stdio.h>
int main()
{
	float num=12.6f,*ptr;
    ptr=&num;
    printf("num's address:%p\nptr's address:%p",num,ptr);
 } 
