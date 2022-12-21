#define _CRT_SECURE_NO_WARNINGS 1

//字符金字塔
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//
//	int i = 0;
//	
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
// 
// 
// 
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	//输出金字塔
//
//	int i = 0;
//    //每循环一次，打印一行.
//	//每一行有2部分组成，空格和字符
//	for (i = 0; i < 5; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//
//		//字符
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//字符之间的转换
//#include<stdio.h>
//int main()
//{
//	char c1 = 'C' + 4;
//	char c2 = 'h' + 4;
//
//	char c3 = 'i' + 4;
//	char c4 = 'n' + 4;
//	char c5 = 'a' + 4;
//	printf("%c%c%c%c%c", c1, c2, c3, c4, c5);
//	return 0;
//}

//升级


//putchar练习
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'C','h','i','n','a' };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		putchar(arr[i] + 4);
//	}
//	return 0;
//}

//猜数字小游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 0.exit *****\n");
	printf("******************\n");
}
void game()
{
	//随机数的实现
	int ret=rand() % 100;
	
	//printf("%d", ret);
	//猜数字
	while (1)
	{
		int guess = 0;
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
			printf("猜对了\n");
	}
}

int main()
{
	int input = 0;
	
    menu();
	do
	{
		srand((unsigned int)time(NULL));
		printf("请选择》 ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始，请猜数字\n");
			puts("数字范围是0-100");
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);
	return 0;
}