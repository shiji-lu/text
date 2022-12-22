#define _CRT_SECURE_NO_WARNINGS 1
//指针进阶
//sizeof运算的结果是unsigned int


//0x11223344
//高位字节->低位字节
//大端存储
//高位字节放在低地址，低位字节放在高地址上

//小端存储
//低位字节放在低地址，高位字节放在高地址上

//判断大小端存储
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	//0000 0000 0000 0000 0000 0000 0000 0001
//	//00 00 00 01  十六进制内存展示
//	//高位字节->低位字节
//	//小端存储
//    //低位字节放在低地址，高位字节放在高地址上
//	//01在前     char* 一次访问一个字节
//	char* p = &a;
//	if (*p == 01)
//	{
//		printf("小端存储\n");
//	}
//	return 0;
//}


//不一样的二维数组引用方式
//#include<stdio.h>
//void print_1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_3(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//			//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//			//可以数组指针来接收
//		{
//			printf("%d ", *(arr[i] + j));//每行一维数组跳过的方式来访问每一个元素
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print_1(arr, 3, 5);//一般传参
//	printf("---------\n");
//	print_2(*arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	printf("---------\n");
//	print_3(arr, 3, 5);
//	return 0;
//}



//谁是杀手
#include<stdio.h>
int main()
{

	return 0;
}


//杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 5 1
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;//行数
//	int j = 0;//列数
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j>=1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}