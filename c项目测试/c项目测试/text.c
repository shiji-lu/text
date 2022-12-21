#define _CRT_SECURE_NO_WARNINGS 1

////题目1.猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<sys/timeb.h>
//int main()
//{
//	clock_t start;
//	clock_t finsh;
//	double duration;//时间差
//	srand((unsigned int)time(NULL));
//	//printf("游戏开始，请猜数字\n");
//	//puts("数字范围是0-100");
//	int ret = rand() % 100;
//	int guess ;
//	int count = 0;
//	start = clock();
//    while(~scanf("%d", &guess))
//	{
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//			count++;
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//			count++;
//		}
//		else
//		{
//           printf("猜对了\n");
//		   finsh = clock();
//		   duration = (double)(finsh - start);//计算时间差
//		   count++;
//		   printf("你一共猜了%d次", count);
//		   printf("总共用了%lf毫秒\n", duration);
//		   break;
//		}
//			
//	} 
//
//	return 0;
//}


////计算器
//#include<stdio.h>
//int main()
//{
//	double x = 0.0;
//	double y = 0.0;
//	char ch=0;
//	double ret = 0.0;
//	while (~scanf("%lf%c%lf",&x,&ch,&y))
//	{
//		switch (ch)
//		{
//		case '+':
//			ret = x + y;
//			break;
//		case '-':
//			ret = x - y;
//			break;
//		case '*':
//			ret = x * y;
//			break;
//		case '/':
//			ret = x / y;
//			break;
//		}
//		printf("%.2lf\n", ret);
//	}
//	return 0;
//}

//输入一个五位数并把每一位数字排序输出大--小
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int ar[5];
//	printf("请输入一个五位数\n");
//	while (~scanf("%d", &num))
//	{
//		int i = 0;
//		int ret = 0;
//		if (num > 9999 && num < 100000)
//		{
//			while (num > 0)
//			{
//				for (i = 0; i < 5; i++)
//				{
//					ret = num % 10;
//					num /= 10;
//					ar[i] = ret;
//				}
//			}
//			for (i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 4 - i; j++)
//				{
//					if (ar[j] < ar[j + 1])
//					{
//						int t = ar[j];
//						ar[j] = ar[j + 1];
//						ar[j + 1] = t;
//					}
//				}
//			}
//			for (i = 0; i < 5; i++)
//			{
//				printf("%d", ar[i]);
//			}
//			printf("\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入：");
//		}
//	}
//	
//	
//	return 0;
//}


//////小学生测验程序  全局变量版
#include<stdio.h>
int sum = 0;
int  TM1()
{
	printf("1.数学运算\n请输入52.1*10=？\n");
	int ret1 = 0;
	int count1 = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &ret1);
		if (ret1 == 521)
		{
			printf("答对了\n");
			break;
		}
		else
		{
			printf("答案错误\n");
			count1++;
		}
	}
	switch (count1)
	{
	case 0:
		sum = sum + 25;
		break;
	case 1:
		sum = sum + 20;
		break;
	case 2:
		sum = sum + 15;
		break;
	case 3:
		sum = sum + 0;
		printf("正确答案是521\n");
		break;
	}

}
int  TM2()
{
	printf("2.英语题\n请输入lov_是爱的意思缺少的字母\n");
	char ch = 0;
	int count2 = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		getchar();
		scanf("%c", &ch);
		if (ch == 'e')
		{
			printf("答对了\n");
			break;
		}
		else
		{
			printf("答案错误\n");
			count2++;
		}
	}
	switch (count2)
	{
	case 0:
		sum = sum + 25;
		break;
	case 1:
		sum = sum + 20;
		break;
	case 2:
		sum = sum + 15;
		break;
	case 3:
		sum = sum + 0;
		printf("正确答案是e\n");
		break;
	}

}
int  TM3()
{

	printf("3.英语题\n请输入L对应的小写字母\n");
	char ch = 0;
	int count3 = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		getchar();
		scanf("%c", &ch);
		if (ch == 'l')
		{
			printf("答对了\n");
			break;
		}
		else
		{
			printf("答案错误\n");
			count3++;
		}
	}
	switch (count3)
	{
	case 0:
		sum = sum + 25;
		break;
	case 1:
		sum = sum + 20;
		break;
	case 2:
		sum = sum + 15;
		break;
	case 3:
		sum = sum + 0;
		printf("正确答案是l\n");
		break;
	}


}
int  TM4()
{

	printf("4.英语题\n一共有多少个大写字母\n");
	int ch = 0;
	int count4 = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		getchar();
		scanf("%d", &ch);
		if (ch == 26)
		{
			printf("答对了\n");
			break;
		}
		else
		{
			printf("答案错误\n");
			count4++;
		}
	}
	switch (count4)
	{
	case 0:
		sum = sum + 25;
		break;
	case 1:
		sum = sum + 20;
		break;
	case 2:
		sum = sum + 15;
		break;
	case 3:
		sum = sum + 0;
		printf("正确答案是26\n");
		break;
	}

}

int main()
{

	printf("总共四道题\n每题25分\n");

	TM1();
	TM2();
	TM3();
	TM4();
	if (sum >= 90)
	{
		printf("SMART\n");
	}
	else if (sum >= 80)
	{
		printf("GOOD\n");
	}
	else if (sum >= 70)
	{
		printf("OK\n");
	}
	else if (sum >= 60)
	{
		printf("PASS\n");
	}
	else
	{
		printf("TRY AGAIN\n");
	}
	//printf("总共获得%d", sum);
	return 0;
}


////小学生测验程序  局部变量版
//#include<stdio.h>
//int  TM1()
//{
//	printf("1.数学运算\n请输入52.1*10=？\n");
//	int ret1 = 0;
//	int count1 = 0;
//	int sum = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &ret1);
//		if (ret1 == 521)
//		{
//			printf("答对了\n");
//			break;
//		}
//		else
//		{
//			printf("答案错误\n");
//			count1++;
//		}
//	}
//	switch (count1)
//	{
//	case 0:
//		sum = 25;
//		break;
//	case 1:
//		sum = 20;
//		break;
//	case 2:
//		sum = 15;
//		break;
//	case 3:
//		sum = 0;
//		printf("正确答案是521\n");
//		break;
//	}
//	printf("获得%d分\n", sum);
//	return sum;
//
//}
//int  TM2()
//{
//	printf("2.英语题\n请输入lov_是爱的意思缺少的字母\n");
//	char ch = 0;
//	int count2 = 0;
//	int sum = 0;
//	//getchar();
//	for (int i = 0; i < 3; i++)
//	{
//		getchar();
//		scanf("%c", &ch);
//		if (ch == 'e')
//		{
//			printf("答对了\n");
//			break;
//		}
//		else
//		{
//			printf("答案错误\n");
//			count2++;
//		}
//	}
//	switch (count2)
//	{
//	case 0:
//		sum = 25;
//		break;
//	case 1:
//		sum = 20;
//		break;
//	case 2:
//		sum = 15;
//		break;
//	case 3:
//		sum = 0;
//		printf("正确答案是e\n");
//		break;
//	}
//
//	printf("获得%d分\n", sum);
//	return sum;
//}
//int  TM3()
//{
//
//	printf("3.英语题\n请输入L对应的小写字母\n");
//	char ch = 0;
//	int count3 = 0;
//	int sum = 0;
//	//getchar();
//	for (int i = 0; i < 3; i++)
//	{
//		getchar();
//		scanf("%c", &ch);
//		if (ch == 'l')
//		{
//			printf("答对了\n");
//			break;
//		}
//		else
//		{
//			printf("答案错误\n");
//			count3++;
//		}
//	}
//	switch (count3)
//	{
//	case 0:
//		sum = 25;
//		break;
//	case 1:
//		sum = 20;
//		break;
//	case 2:
//		sum = 15;
//		break;
//	case 3:
//		sum = 0;
//		printf("正确答案是l\n");
//		break;
//	}
//
//	printf("获得%d分\n", sum);
//	return sum;
//
//}
//int  TM4()
//{
//
//	printf("4.英语题\n一共有多少个大写字母\n");
//	int ch = 0;
//	int count4 = 0;
//	int sum = 0;
//	//getchar();
//	for (int i = 0; i < 3; i++)
//	{
//		getchar();
//		scanf("%d", &ch);
//		if (ch == 26)
//		{
//			printf("答对了\n");
//			break;
//		}
//		else
//		{
//			printf("答案错误\n");
//			count4++;
//		}
//	}
//	switch (count4)
//	{
//	case 0:
//		sum = 25;
//		break;
//	case 1:
//		sum = 20;
//		break;
//	case 2:
//		sum = 15;
//		break;
//	case 3:
//		sum = 0;
//		printf("正确答案是26\n");
//		break;
//	}
//
//	printf("获得%d分\n", sum);
//	return sum;
//
//}
//
//int main()
//{
//
//	printf("总共四道题\n每题25分\n");
//	int sum = TM1() + TM2() + TM3() + TM4();
//	if (sum >= 90)
//	{
//		printf("SMART\n");
//	}
//	else if (sum >= 80)
//	{
//		printf("GOOD\n");
//	}
//	else if (sum >= 70)
//	{
//		printf("OK\n");
//	}
//	else if (sum >= 60)
//	{
//		printf("PASS\n");
//	}
//	else
//	{
//		printf("TRY AGAIN\n");
//	}
//	
//	return 0;
//}