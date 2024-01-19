/*請以C語言撰寫，以遞迴的方式撰寫函數，*/
#include <stdio.h>
#define test 3
//sum(n) = n+sum(n-1)， sum(1)=1。
//計算1+2+3+…+n的值。

int sum(n){
	if (n>1){
		return n+sum(n-1);
	}
	else return 1;
}
//計算1*2+2*3+3*4+…+(n-1)*n的值 
int rsum(int n){
	if (n<1)return 0;
	else return (n-1) * n + rsum(n-1);
		
}
int main(){
	printf("1+2+3+…+n:%d\n1*2+2*3+3*4+…+(n-1)*n:%d",sum(test),rsum(test));
}
