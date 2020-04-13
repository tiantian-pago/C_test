/*
 * 有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
 */

#include<stdio.h>

int main()
{
	int i,j;
	float a,b,sum=0;
	a = 2;
	b = 1;
	for(i=0;i<20;i++)
	{
		sum += a/b;
		a = a + b;
		b = a - b;	
	}

	printf("sum=%9.6f\n",sum);
	return 0;

}
