#include<stdio.h>

int main()
{
	int s=0,a,n,t;

	printf("请输入a和n:\n");
	scanf("%d %d",&a,&n);

	t = a;

	while(n>0)
	{
		s +=t;
		a *=10;
		t = a + t;
		n--;
	}

	printf("a+aa+aaa+.....=%d\n",s);

return 0;
}
