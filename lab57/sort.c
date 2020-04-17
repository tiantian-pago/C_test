/*
 *输入3个数a,b,c，按大小顺序输出
 */

#include<stdio.h>

void swap(int *a,int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a,b,c;

	printf("输入 a, b, c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		swap(&a,&b);
	if(a>c)
		swap(&a,&c);
	if(b>c)
		swap(&b,&c);
	printf("%d %d %d\n",a,b,c);
	return 0;
}
