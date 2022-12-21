#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	printf("请输入数字：");
	while (~scanf("%d", &num))
	{
		if (num < 0 || num>99999)
		{
			printf("输入错误,请重新输入:");
		}
		else
		{
			if (num > 10000)//假设16789
			{
				printf("%d ", num / 10000);//1
			}
			if (num > 1000)
			{
				printf("%d ", num % 10000 / 1000);//6789/1000=6
			}
			if (num > 100)
			{
				printf("%d ", num % 1000 / 100);//16789%1000=789/100=7
			}
			if (num > 10)
			{
				printf("%d ", num % 100 / 10);
			}
			if(num>0)
				printf("%d\n", num%10);

		}
	}
	return 0;
}