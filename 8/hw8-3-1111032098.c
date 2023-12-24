//請以C語言撰寫一程式，利用指標的算術運算來找出一維整數陣列中，
//元素最大值的索引值與最小值的索引值（一維整數陣列的元素值請自行設定）。
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
	//默認第0項為最大值 
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
	//默認第0項為最小值 
	for(i=1;i<size;i++)
	{
		if(min>*(arr+i))
		{
			min=*(arr+i);
		}
	}
	return min;
}
int INDEXOF(int *arr,int target)//回傳陣列中第一個target
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
