/*
 * 删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
 */

#include<stdio.h>
#include<string.h>

int main()
{
	char str[256];
	char s;
	char *delete_characters(char *str, char *c);
	printf("请输入指定字符串：");
	scanf("%s",&str);
	getchar();
	printf("请输入需要删除的字母：");
	scanf("%c",&s);

	printf("删除后的字符串为：%s\n",delete_characters(str,&s));
return 0;
}

char *delete_characters(char *str,char *c)
{
	int i,j;
	if(NULL==c)
		return str;
	for(i=0;str[i]!='\0';i++)
		if(str[i]==*c)
		{	for(j=i;str[j]!='\0';j++){
				str[j] = str[j+1];
		}}
	str[i+1] = '\0';
	return str;
}
