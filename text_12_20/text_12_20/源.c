#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int height;  // 圣诞树的高度
//    int i, j;
//
//    printf("请输入圣诞树的高度：");
//    scanf("%d", &height);  // 读入圣诞树的高度
//
//    // 打印圣诞树的每一行
//    for (i = 1; i <= height; i++)
//    {
//        // 打印空格
//        for (j = 1; j <= height - i; j++)
//        {
//            printf(" ");
//        }
//
//        // 打印星号
//        for (j = 1; j <= 2 * i - 1; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");  // 换行
//    }
//
//    // 打印圣诞树的底部
//    for (i = 1; i <= 2; i++)
//    {
//        for (j = 1; j <= height - 2; j++)
//        {
//            printf(" ");
//        }
//        printf("**\n");
//    }
//
//    return 0;
//}


//大小端存储方式
//大端字节序
//把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处
//小端字节序
//把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处
//int a=0x11223344
//低位  44    高位   11





//char*  解引用访问一个字节
//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001  -源码
//	//11111111111111111111111111111110  -反码
//	//11111111111111111111111111111111  -补码
//	//char只存8比特位
//	//11111111     打印%d形式，整形提升
//	//11111111111111111111111111111111  -补码
//	signed char b = -1;
//	//11111111
//	//11111111111111111111111111111111  -补码
//	unsigned char c = -1;
//	//11111111   由于无符号
//	//整形提升补0
//	//00000000000000000000000011111111  -补码等于源码
//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//  -1  -1  255
//
//
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	//%u  无符号的意思
//	return 0;
//}
////有符号位的char的范围是-128~127
//无符号位的是0~255



//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d", i + j);//%d 有符号位的十进制数
//	//计算用的补码，打印的是用的原码
//
//	return 0;
//}
//



//数组指针的应用
#include <stdio.h>
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	print_arr1(arr, 3, 5);
	//数组名arr，表示首元素的地址
	//但是二维数组的首元素是二维数组的第一行
	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
	//可以数组指针来接收
	print_arr2(arr, 3, 5);
	return 0;
}

