#include<stdio.h>

#include<stdlib.h>
struct student/* 定義結構student */
{

    char name[10];

    int score;
};
typedef struct student std; 

std *GETstd(int num,std *ptr)//(學生數量,std陣列) 
{
  int i;

  ptr = (struct student * ) malloc(num * sizeof(struct student));

  for (i = 0; i < num; i++)

  {

    fflush(stdin); /* 清空緩衝區的內容 */

    printf("name for student %d: ", i + 1);

    gets((ptr + i) -> name); /* 將鍵入的字串寫入name成員 */

    printf("score for student %d: ", i + 1);

    scanf("%d", & (ptr + i) -> score); /* 將鍵入的整數寫入score成員 */

  }

  for (i = 0; i < num; i++)
  {
	printf("%s: score=%d\n", (ptr + i) -> name, (ptr + i) -> score);
  }
  printf("\n");
  return ptr; 
}
int GETSUM(int num,std *ptr)//取得std結構中score總和 (學生數量,std陣列) 
{
	int j,sum=0;
	for(j=0;j<num;j++)
	{
		sum+=(ptr+j)->score;
	}
	return sum;
}

int main(void)

{
  int num;
  printf("Number of student: ");

  scanf("%d", &num);
  std *ptr;
  ptr=GETstd(num,ptr); /* 宣告指向結構student的指標ptr */
  int Totoal=GETSUM(num,ptr);
  printf("AVG:%.4lf\n\n",(double)Totoal/num);
  free(ptr); /* 釋放記憶空間 */

  system("pause");

  return 0;

}
