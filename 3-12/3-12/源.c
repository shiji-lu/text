#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	char ch[] = "123456";
	while (ch[i++])
	{
	}
	i-=2;//ÕâÁ©ÓÐ²î±ð
	/*while (ch[i])
	{
		i++;
	}
	i--;*/
	printf("%d ", i);
	return 0;
}