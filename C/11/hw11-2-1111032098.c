#include<stdio.h>

#include<stdlib.h>
struct student/* �w�q���cstudent */
{

    char name[10];

    int score;
};
typedef struct student std; 

std *GETstd(int num,std *ptr)//(�ǥͼƶq,std�}�C) 
{
  int i;

  ptr = (struct student * ) malloc(num * sizeof(struct student));

  for (i = 0; i < num; i++)

  {

    fflush(stdin); /* �M�Žw�İϪ����e */

    printf("name for student %d: ", i + 1);

    gets((ptr + i) -> name); /* �N��J���r��g�Jname���� */

    printf("score for student %d: ", i + 1);

    scanf("%d", & (ptr + i) -> score); /* �N��J����Ƽg�Jscore���� */

  }

  for (i = 0; i < num; i++)
  {
	printf("%s: score=%d\n", (ptr + i) -> name, (ptr + i) -> score);
  }
  printf("\n");
  return ptr; 
}
int GETSUM(int num,std *ptr)//���ostd���c��score�`�M (�ǥͼƶq,std�}�C) 
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
  ptr=GETstd(num,ptr); /* �ŧi���V���cstudent������ptr */
  int Totoal=GETSUM(num,ptr);
  printf("AVG:%.4lf\n\n",(double)Totoal/num);
  free(ptr); /* ����O�ЪŶ� */

  system("pause");

  return 0;

}
