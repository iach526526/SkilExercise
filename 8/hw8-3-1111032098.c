//�ХHC�y�����g�@�{���A�Q�Ϋ��Ъ���N�B��ӧ�X�@����ư}�C���A
//�����̤j�Ȫ����ޭȻP�̤p�Ȫ����ޭȡ]�@����ư}�C�������ȽЦۦ�]�w�^�C
#include <stdio.h>
int SIZE(int *arr)
{
	int i=0;
	while(*(arr+i)!='\0')
	{
		i++;
	}
	return i;
}
int MAX(int *arr,int size)
{
	int max=arr[0],i;
	//�q�{��0�����̤j�� 
	for(i=1;i<size;i++)
	{
		if(max<*(arr+i))
		{
			max=*(arr+i);
		}
	}
	return max;
}
int MIN(int *arr,int size)
{
	int min=arr[0],i;
	//�q�{��0�����̤p�� 
	for(i=1;i<size;i++)
	{
		if(min>*(arr+i))
		{
			min=*(arr+i);
		}
	}
	return min;
}
int INDEXOF(int *arr,int target)//�^�ǰ}�C���Ĥ@��target
{
	int size=SIZE(arr),i;
	for(i=0;i<size;i++)
	{
		if(target==*(arr+i))
		{
			return i;
		}
	}
 } 
int main()
{
	int line[]={8,99,1,66,-484,23156,4};
	int *To_line=line;
	printf("max index:%d\n",INDEXOF(To_line,MAX(To_line,SIZE(line)))) ;
	printf("min index:%d",INDEXOF(To_line,MIN(To_line,SIZE(line)))) ;
	return 0;
}
