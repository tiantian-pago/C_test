/*
 * extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。
 * 当您使用 extern 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。
 * extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候.
 */

#include<stdio.h>

int count;
extern void write_extern();

int main()
{
	count = 5;
	write_extern();
return 0;
}
