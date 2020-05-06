/*
 * 输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
 */

#include<stdio.h>

void swap(int *a,int n)
{
	int i;
	int max = a[0];
	int s = 0;

	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			s = i;
		}
	}
	a[s] = a[0];
	a[0] = max;

	int j;
	int min = a[n-1];
	int t = n-1;

	for(j=0;j<n;j++)
	{
		if(a[j]<min)
		{
			min = a[j];
			t = j;
		}
	}
	a[t] = a[n-1];
	a[n-1] = min;
}

void print_a(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	int a[20];
	int i,n;
	printf("设置数组长度(<20):");
	scanf("%d",&n);
	printf("输入 %d 个元素:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	swap(a,n);
	print_a(a,n);
	return 0;
}
