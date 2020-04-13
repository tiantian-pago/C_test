/*
 * 一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
 */

#include<stdio.h>

int main()
{
	int n,a,b,c,d,e;

	printf("请输入一个5位正整数：");
	scanf("%ld",&n);
	a = n/10000;
	b = n%10000/1000;
	c = n%1000/100;
	d = n%100/10;
	e = n%10;

	if(a==e&&b==d)
		printf("这是一个回文数\n");
	else
		printf("不是回文\n");
return 0;

}
