#include<stdio.h>

int main()
{
	char c;
	int letters=0,spaces=0,digits=0,others=0;

	printf("请输入一些字符\n");

	while((c=getchar())!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			letters++;
		else if(c==' ')
			spaces++;
		else if(c>='0'&&c<='9')
			digits++;
		else
			others++;
	}
	printf("letters=%d,spaces=%d,digits=%d,others=%d\n",letters,spaces,digits,others);

return 0;
}
