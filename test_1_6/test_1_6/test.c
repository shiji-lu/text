#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	void(*pf)() = &test;
//	void(*pf1)() = test;
//	printf("%p\n", *pf);
//	printf("%p\n", *pf1);
//
//	return 0;
//int Add(int x,int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = 0;
//	int (*pf)(int, int) = &Add;
//	ret = (*pf)(2, 5);
//	printf("ret=%d\n", ret);
//	return 0;
//}




//指针进阶
	//#include<stdio.h>
	//int main()
	//{
	//	(*(void (*)())0)();
	//	//突破口是0、
	//	//看似是强制转化类型比如：(char)0 把0转化为char类型
	//	//(void (*)())0中的  void (*)()  是强制转化的类型 函数指针类型
	//	//*(void (*)())0解引用0地址处的函数
	//	//参数类型是无参
	//
	//	return 0;
	//}


	//整形计算器的模拟
	/*#include<stdio.h>
	int Add(int x,int y)
	{
		return x + y;
	}
	
	int Sub(int x, int y)
	{
		return x - y;
	}
	
	int Mul(int x, int y)
	{
		return x * y;
	}
	
	int Div(int x, int y)
	{
		return x / y;
	}
	void menu()
	{
		printf("****************\n");
		printf("**1.add 2.sub **\n");
		printf("**3.mul 4.div **\n");
		printf("**   0.exit   **\n");
		printf("****************\n");
	}
	int main()
	{
		int input = 0;
		do {
			menu();
			printf("请选择》");
			scanf("%d", &input);
			printf("请输入两个操作数>");
			int x = 0;
			int y = 0;
			scanf("%d%d", &x, &y);
			int ret = 0;
			switch (input)
			{
			case 1:
				ret=Add(x, y);
				break;
			case 2:
				ret = Sub(x, y);
				break;
			case 3:
				ret = Mul(x, y);
				break;
			case 4:
				ret = Div(x, y);
				break;
			case 0:
				printf("推出程序\n");
				break;
			default:
				printf("输入错误，重新输入\n");
				break;
			}
			printf("ret=%d\n", ret);
		} while (input);
		return 0;
	}*/



	//修改后
	/*#include<stdio.h>
	int Add(int x, int y)
	{
		return x + y;
	}
	
	int Sub(int x, int y)
	{
		return x - y;
	}
	
	int Mul(int x, int y)
	{
		return x * y;
	}
	
	int Div(int x, int y)
	{
		return x / y;
	}
	void menu()
	{
		printf("****************\n");
		printf("**1.add 2.sub **\n");
		printf("**3.mul 4.div **\n");
		printf("**   0.exit   **\n");
		printf("****************\n");
	}
	int main()
	{
		int input = 0;
		do {
			menu();
			printf("请选择》");
			scanf("%d", &input);
			int x = 0;
			int y = 0;
			int ret = 0;
			switch (input)
			{
			case 1:
				printf("请输入两个操作数>");
				scanf("%d%d", &x, &y);
				ret = Add(x, y);
				printf("ret=%d\n", ret);
				break;
			case 2:
				printf("请输入两个操作数>");
				scanf("%d%d", &x, &y);
				ret = Sub(x, y);
				printf("ret=%d\n", ret);
				break;
			case 3:
				printf("请输入两个操作数>");
				scanf("%d%d", &x, &y);
				ret = Mul(x, y);
				printf("ret=%d\n", ret);
				break;
			case 4:
				printf("请输入两个操作数>");
				scanf("%d%d", &x, &y);
				ret = Div(x, y);
				printf("ret=%d\n", ret);
				break;
			case 0:
				printf("退出程序\n");
				break;
			default:
				printf("输入错误，重新输入\n");
				break;
			}
		} while (input);
		return 0;
	}*/


	//函数指针数组的定义与应用
	//#include<stdio.h>
	//int main()
	//{
	//	int (*p)(int, int);//函数指针
	//	int (*p[5])(int, int);//函数指针数组
	//	return 0;
	//}
	
	#include<stdio.h>
	int Add(int x, int y)
	{
		return x + y;
	}
	
	int Sub(int x, int y)
	{
		return x - y;
	}
	
	int Mul(int x, int y)
	{
		return x * y;
	}
	
	int Div(int x, int y)
	{
		return x / y;
	}
	void menu()
	{
		printf("****************\n");
		printf("**1.add 2.sub **\n");
		printf("**3.mul 4.div **\n");
		printf("**   0.exit   **\n");
		printf("****************\n");
	}
	int main()
	{
		int input = 0;
		do {
			menu();
			//函数指针数组的应用,同类型的可以用一个数组
			int (*parr[5])(int, int) = { NULL, Add,Sub,Mul,Div };//刚好数组下标对应菜单数字功能键
			printf("请选择》");
			scanf("%d", &input);
			if (input >= 1 && input <= 4)
			{
				int x = 0;
				int y = 0;
				int ret = 0;
				printf("请输入两个操作数》");
				scanf("%d%d", &x, &y);
				ret = (parr[input])(x, y);
				printf("ret=%d\n", ret);
			}
			else if (input == 0)\
			{
				printf("退出程序\n");
				break;
			}
			else
			{
				printf("输入错误，重新输入\n");
			}
		} while (input);
		return 0;
	}






	//int arr[10];
	//数组元素类型是 int
	//arr数组的类型是 int[10];

	//函数指针的数组-数组
	//取出函数指针数组的地址
	//整形数组
	//int arr[5];
	//int(*p1)[5] = &arr;
	//
	//整形指针的数组
	//int*arr[5];
	//int*（*p2）[5]=&arr;
	//p2是指向【整形指针数组】的指针

	//函数指针数组
	//&函数指针数组

	//int(*p)(int, int);//函数指针
	//int(*p2[4]) (int，int);//函数指针的数组
	//int(*(*p3)[4])(int, int) = &p2;//取出的是函数指针数组的地址
	//                               p3就是一个指向【函数指针的数组】的指针

	//指针进阶
	//#include<stdio.h>
	//int main()
	//{
	//	(*(void (*)())0)();
	//	//突破口是0、
	//	//看似是强制转化类型比如：(char)0 把0转化为char类型
	//	//(void (*)())0中的  void (*)()  是强制转化的类型 函数指针类型
	//	//*(void (*)())0解引用0地址处的函数
	//	//参数类型是无参
	//
	//	return 0;
	//}


	//整形计算器的模拟
	//#include<stdio.h>
	//int Add(int x,int y)
	//{
	//	return x + y;
	//}
	//
	//int Sub(int x, int y)
	//{
	//	return x - y;
	//}
	//
	//int Mul(int x, int y)
	//{
	//	return x * y;
	//}
	//
	//int Div(int x, int y)
	//{
	//	return x / y;
	//}
	//void menu()
	//{
	//	printf("****************\n");
	//	printf("**1.add 2.sub **\n");
	//	printf("**3.mul 4.div **\n");
	//	printf("**   0.exit   **\n");
	//	printf("****************\n");
	//}
	//int main()
	//{
	//	int input = 0;
	//	do {
	//		menu();
	//		printf("请选择》");
	//		scanf("%d", &input);
	//		printf("请输入两个操作数>");
	//		int x = 0;
	//		int y = 0;
	//		scanf("%d%d", &x, &y);
	//		int ret = 0;
	//		switch (input)
	//		{
	//		case 1:
	//			ret=Add(x, y);
	//			break;
	//		case 2:
	//			ret = Sub(x, y);
	//			break;
	//		case 3:
	//			ret = Mul(x, y);
	//			break;
	//		case 4:
	//			ret = Div(x, y);
	//			break;
	//		case 0:
	//			printf("推出程序\n");
	//			break;
	//		default:
	//			printf("输入错误，重新输入\n");
	//			break;
	//		}
	//		printf("ret=%d\n", ret);
	//	} while (input);
	//	return 0;
	//}



	//修改后
	//#include<stdio.h>
	//int Add(int x, int y)
	//{
	//	return x + y;
	//}
	//
	//int Sub(int x, int y)
	//{
	//	return x - y;
	//}
	//
	//int Mul(int x, int y)
	//{
	//	return x * y;
	//}
	//
	//int Div(int x, int y)
	//{
	//	return x / y;
	//}
	//void menu()
	//{
	//	printf("****************\n");
	//	printf("**1.add 2.sub **\n");
	//	printf("**3.mul 4.div **\n");
	//	printf("**   0.exit   **\n");
	//	printf("****************\n");
	//}
	//int main()
	//{
	//	int input = 0;
	//	do {
	//		menu();
	//		printf("请选择》");
	//		scanf("%d", &input);
	//		int x = 0;
	//		int y = 0;
	//		int ret = 0;
	//		switch (input)
	//		{
	//		case 1:
	//			printf("请输入两个操作数>");
	//			scanf("%d%d", &x, &y);
	//			ret = Add(x, y);
	//			printf("ret=%d\n", ret);
	//			break;
	//		case 2:
	//			printf("请输入两个操作数>");
	//			scanf("%d%d", &x, &y);
	//			ret = Sub(x, y);
	//			printf("ret=%d\n", ret);
	//			break;
	//		case 3:
	//			printf("请输入两个操作数>");
	//			scanf("%d%d", &x, &y);
	//			ret = Mul(x, y);
	//			printf("ret=%d\n", ret);
	//			break;
	//		case 4:
	//			printf("请输入两个操作数>");
	//			scanf("%d%d", &x, &y);
	//			ret = Div(x, y);
	//			printf("ret=%d\n", ret);
	//			break;
	//		case 0:
	//			printf("退出程序\n");
	//			break;
	//		default:
	//			printf("输入错误，重新输入\n");
	//			break;
	//		}
	//	} while (input);
	//	return 0;
	//}


	//函数指针数组的定义与应用
	//#include<stdio.h>
	//int main()
	//{
	//	int (*p)(int, int);//函数指针
	//	int (*p[5])(int, int);//函数指针数组
	//	return 0;
	//}

//#include<stdio.h>
//	int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****************\n");
//	printf("**1.add 2.sub **\n");
//	printf("**3.mul 4.div **\n");
//	printf("**   0.exit   **\n");
//	printf("****************\n");
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		//函数指针数组的应用,同类型的可以用一个数组
//		int (*parr[5])(int, int) = { NULL, Add,Sub,Mul,Div };//刚好数组下标对应菜单数字功能键
//		printf("请选择》");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			int ret = 0;
//			printf("请输入两个操作数》");
//			scanf("%d%d", &x, &y);
//			ret = (parr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)\
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，重新输入\n");
//		}
//	} while (input);
//	return 0;
//}
