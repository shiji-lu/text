#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	printf("请输入一个不大于5位的正整数：");
	while (~scanf("%d", &num))
	{
		if (num < 0 || num > 99999)
		{
			printf("输入错误，请重新输入：");
		}
		else
		{
			if (num > 9999)
			{
				printf("这个数是5位数\n");
			}
			else if (num > 999)
			{
				printf("这个数是4位数\n");
			}
			else if (num > 99)
			{
				printf("这个数是3位数\n");
			}
			else if (num > 9)
			{
				printf("这个数是2位数\n");
			}
			else
			{
				printf("这个数是1位数\n");
			}
		}
		
	}

	return 0;
}
