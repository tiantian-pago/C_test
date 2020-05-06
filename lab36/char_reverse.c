/*
 * 字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
 */

#include<stdio.h>

void reverse(char *s)
{
	int len=0;
	char temp;
	char *p = s;
	//获取字符串长度
	while(*p!=0)
	{	len++;
		p++;
	
	}
	//反转字符串
	int i = 0;
	while(i<=len/2-1)
	{
		temp = *(s+i);
		*(s+i)= *(s+len-1-i);
		*(s+len-1-i) = temp;
		i++;
	}
}

int main()
{
	char s[] = "www.runoob.com";
	printf("'%s' =>\n",s);
	reverse(s);
	printf("'%s'\n",s);
return 0;
}
