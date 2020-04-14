/*
 * 求一个3*3矩阵对角线元素之和
 */

#include<stdio.h>
#define N 3

int main()
{
	int i,j,sum=0,a[N][N];
	
	printf("请输入一个3*3矩阵：\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==j||j==(N-1-i))
				sum += a[i][j];
		}
	}
	printf("对角线元素之和为：%d\n",sum);
return 0;
}
