#define _CRT_SECURE_NO_WARNINGS 1
//函数指针
//

#include<stdio.h>
void add()
{

}
int main()
{
	printf("%p\n", &add);
	printf("%p\n", add);//函数指针&add===add
	//函数名就是地址===>函数的独特
	//与数组不同，数组名是数组首元素地址

	return 0;
}