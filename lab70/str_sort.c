/*
 * 字符串排序
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char *str1,char *str2)
{
	char tmp[20];
	
	strcpy(tmp,str1);
	strcpy(str1,str2);
	strcpy(str2,tmp);
}

int main()
{
	char str1[20],str2[20],str3[30];

	printf("请输入3个字符串，每个字符串以会车结束！\n");
	fgets(str1,sizeof str1/sizeof str1[0],stdin);
	fgets(str2,sizeof str2/sizeof str2[0],stdin);
	fgets(str3,sizeof str3/sizeof str3[3],stdin);
	if(strcmp(str1,str2)>0) swap(str1,str2);
	if(strcmp(str1,str3)>0) swap(str1,str3);
	if(strcmp(str2,str3)>0) swap(str2,str3);
	printf("排序后的结果为：\n");
	printf("%s\n%s\n%s\n",str1,str2,str3);
	return 0;
}