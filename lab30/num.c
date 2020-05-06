/*
 * 给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
 */

#include<stdio.h>

int main()
{
	int n,a,b,c,d,e;
	
	printf("请输入一个不大于5为的正整数");
	scanf("%ld",&n);

	a = n/10000;       
	b = n%10000/1000;
	c = n%1000/100;
	d = n%100/10;
	e = n%10;
	if(a!=0)
		printf("为5位数，逆序为%d%d%d%d%d\n",e,d,c,b,a);
	else if(b!=0)
		printf("为4位数，逆序为%d%d%d%d\n",e,d,c,b);
	else if(c!=0)
		printf("为3位数，逆序为%d%d%d\n",e,d,c);
	else if(d!=0)	
		printf("为2位数，逆序为%d%d\n",e,d);
	else
		printf("为1位数，逆序为%d\n",n);
return 0;
}
