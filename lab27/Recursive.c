/*
 * 利用递归方法求5!。
 */

#include<stdio.h>

int main()
{
	int j;
	int fator(int n);

	for(j=0;j<=5;j++)
		printf("%d!=%d\n",j,fator(j));
return 0;
}

int fator(int n){
	int sum;

	if(n==0)
		return sum=1;
	else
		return sum = n*fator(n-1);
}
