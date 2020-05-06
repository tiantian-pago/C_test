/*
 * 学习使用register定义变量的方法.
 */

#include<stdio.h>

int main()
{
	register int i;
	int temp;
	temp = 0;
	for(i=1;i<=100;i++)
		temp+=i;
	printf("总和为 %d\n",temp);
	return 0;
}
