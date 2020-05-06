/*
 *利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
 */

#include<stdio.h>

int main()
{
	int i=5;
	void plan(int n);

	printf("请输入5个字符\40:\40");
	plan(i);
	printf("\n");
return 0;
}

void plan(n)
int n;
{
	char c;
	if(n<=1){
		c = getchar();
		printf("输出相反结果\40:\40");
		putchar(c);
	}
	else{
		c = getchar();
		plan(n-1);
		putchar(c);
	}
}
