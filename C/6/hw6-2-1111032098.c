/*�ХHC�y�����g�A�H���j���覡���g��ơA*/
#include <stdio.h>
#define test 3
//sum(n) = n+sum(n-1)�A sum(1)=1�C
//�p��1+2+3+�K+n���ȡC

int sum(n){
	if (n>1){
		return n+sum(n-1);
	}
	else return 1;
}
//�p��1*2+2*3+3*4+�K+(n-1)*n���� 
int rsum(int n){
	if (n<1)return 0;
	else return (n-1) * n + rsum(n-1);
		
}
int main(){
	printf("1+2+3+�K+n:%d\n1*2+2*3+3*4+�K+(n-1)*n:%d",sum(test),rsum(test));
}
