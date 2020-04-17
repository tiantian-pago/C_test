/*
 * 有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[20];
	int i,n,offset;
	void print_arr(int arr[],int n);
	void move(int arr[],int n,int offset);
	//输入数组大小和数组内容
	printf("设置数组的大小：");
	scanf("%d",&n);
	printf("输入数组内容\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	//输入滚动偏移量
	printf("设置偏移量：");
	scanf("%d",&offset);
	//打印滚动前数组
	print_arr(arr,n);
	//滚动数并打印
	move(arr,n,offset);
	print_arr(arr,n);

	return 0;
}

//打印数组
void print_arr(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

//滚动数组
void move(int arr[],int n,int offset)
{
	int *p,*arr_end;
	arr_end = arr+n;   //数组最后一个元素
	int last;

	//滚动直到偏移量为0
	while(offset)
	{
		last = *(arr_end-1);
		for(p=arr_end-1;p!=arr;--p)
			*p=*(p-1);
		*arr=last;
		--offset;
	}

}
