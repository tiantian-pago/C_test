/*
 * 将一个数组逆序输出。
 */

#include<stdio.h>
#define N 10

int main()
{
	int a[N] = {0,1,2,3,4,5,6,7,8,9};
	int i,temp;

	printf("原数组是：\n");
	for(i=0;i<N;i++)
		printf("%d",a[i]);
	//反向排序
	for(i=0;i<N/2;i++)
	{	
		temp = a[i];
		a[i] = a[N-1-i];
		a[N-1-i] = temp;
	}
	printf("\n逆向输出后的数组为：\n");
	for(i=0;i<N;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}
