/*
 * 判断一个数字是否为质数
 */

#include<stdio.h>
#include<math.h>

int main()
{
	int n,i;

	printf("请输入一个自然数：");
	scanf("%d",&n);
	
	if(n<=1){
		printf("是质数（素数）\n");
		return 0;
	}
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			printf("不是质数（素数）\n");
			return 0;
		}
	
	}
	printf("%d是质数（素数）\n",n);
	return 0;
}
