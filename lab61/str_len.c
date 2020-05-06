/*
 * 写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
 */

#include<stdio.h>
#include<stdlib.h>

int length(char *s)
{
	int count=0;
	while(*s!='\0')
	{
		count++;
		s++;
	}
	return count;
}

int main()
{
	char str[50];
	int len;
	printf("请输入一个字符串\n");
	scanf("%s",str);
	len = length(str);
	printf("字符串长度为 %d\n",len);
	return 0;
}
