#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j,  j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float a[5][5] = { 0 };//建立5*5表格更加美观
//	int i = 0;
//	int j = 0;
//	float sum[5] = { 0 };
//	float SUM = 0;
//	float avg[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)//这里限制输入数字区域则为学生成绩
//		{
//			scanf("%f", &a[i][j]);
//			SUM += a[i][j];
//		}
//		sum[i] = SUM;
//		SUM = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		avg[i] = sum[i] / 3.0;
//		a[i][3] = sum[i];
//		a[i][4] = avg[i];
//	}
//	printf("整理如下\n");
//	printf("成绩1\t成绩2\t成绩3\t总分\t平均分\n");
//	printf("-----------------------------------------------\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%.2f\t", a[i][j]);
//
//		}
//		printf("\n");
//		printf("-----------------------------------------------\n");
//	}
//	return 0;
//}
//




////集合运算
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a[5][3] = { 0 };
//	int sum[5] = { 0 };
//	int avg[5] = { 0 };
//	int SUM = 0;
//	printf("请输入5位同学的成绩,每人三科：\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//			SUM += a[i][j];
//		}
//		sum[i] = SUM;
//		avg[i] = sum[i] / 3;
//		printf("第%d位总分是%d\t",i+1, sum[i]);
//		printf("第%d位平均分是%d\t",i+1, avg[i]);
//		printf("\n");
//		SUM = 0;
//	}
//	return 0;
//}

////交并集运算
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,10,110};
//	int arr2[] = { 2,44,6,8,10,101};
//	int c[12] = { 0 };
//	int i = 0;
//	printf("交集为：");
//	for (i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				printf("%d ", arr1[i]);
//			}
//		}
//		
//	}
//	printf("\n");
//	printf("并集为：");
//	for (i = 0; i < 6; i++)
//	{
//		c[i] = arr1[i];
//	}
//	int j = 0, q = 0,count = 6;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0,q=0; j < 6; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				q = 1;
//				break;
//			}
//		}
//		if (q == 0)
//		{
//			c[i + 6] = arr2[i];
//			count++;
//		}
//	}
//
//	
//	for (i = 0; i <= count; i++)
//	{
//		if (c[i] == 0)
//		{
//			continue;
//		}
//		printf("%d ", c[i]);
//	}
//	printf("\n");
//	return 0;
//
//}


////结构体初阶
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int  age;
//	char id[20];
//};
//void print1(struct stu t)//传值调用
//{
//	printf("%s %s %d\n", t.name, t.id, t.age);
//}
//void print2(struct stu*ps)//传址调用
//{
//	printf("%s %s %d\n", ps->name, ps->id, ps->age);//指针形式
//}
//int main()
//{
//	struct stu s = { "lu",19,"2201102" };
//	printf("%d\n", s.age);
//	printf("%s\n", s.id);
//	printf("%s\n", s.name);//%s是字符串的
//	print1(s);
//	print2(&s);
//	return 0;
//}




//调试技巧
//1)F5直接调试，F9加断点与取消断点，先F9再F5组合直接跳过你认为不会错的代码片段
//然后F10逐过程调试
//2)F11逐语句
//F12快捷定位


//12_11
#/*include<stdio.h>
int main()
{
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}
	return 0;
}*/

//const使用
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[10] = "xxxxxxxx";
//	char arr2[] = "hello";
//	strcpy(arr1,arr2);//拷贝函数（目的，初始），需要引用头文件string.h
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//版本1
//void my_strcpy(char * dist,char * str)
//{
//	while (*dist != '\0')
//	{
//		*dist = *str;
//		*dist++;
//		*str++;
//	}
//	*dist = *str;
//}

//版本2，代码优化
//void my_strcpy(char* dist, char* str)
//{
//	while (*dist != '\0')
//	{
//		*dist++ = *str++;
//	}
//	*dist = *str;
//}


////版本3，代码在优化
//void my_strcpy(char* dist, char* str)
//{
//	while (*dist++ = *str++)//既能拷贝hello\0,又能判断\0的，即\0的as码是0，为假
//	{
//		;
//	}
//}


//版本4，代码继续优化，逐渐成为库函数一摸一样的限制条件
//void my_strcpy(char* dist, char* str)
//{
//	assert(dist!=NULL);//断言，需要引用头文件assert.h
//	assert(str!=NULL);
//	while (*dist++ = *str++)//既能拷贝hello\0,又能判断\0的，即\0的as码是0，为假
//	{
//		;
//	}
//}


////最终优化代码
//char* my_strcpy(char* dist,const char* str)
//{
//	char* ret = dist;
//	while (*dist++ = *str++)//既能拷贝hello\0,又能判断\0的，即\0的as码是0，为假
//	{
//		;
//	}
// return ret;//返回目标的起始地址
//}
//
//int main()
//{
//	char arr1[10] = "xxxxxxxx";
//	char arr2[] = "hello";
//	//拷贝函数（目的，初始),自己写一个同意功能的库函数模拟初始拷贝到目的
//	printf("%s\n", my_strcpy(arr1, arr2));//函数链式访问
//	return 0;
//}


//const
//1)
//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;//解引用num的地址从而改变num的值
//	printf("%d\n", num);
//	return 0;
//}

//2)
//#include<stdio.h>
//int main()
//{
//    int num = 10;
//	const int* p = &num;
//	*p = 20;//const指定的指针变量，不能通过解引用指针变量来改变地址的变量
//	             但是变量可以改变
//	p = 20;
//	printf("%d\n", num);
//	return 0;
//}

//3)
//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int*const p = &num;
//	*p = 20;//const指定的是变量，变量不可以改变
//	//             但是可以解引用指针变量来改变变量地址的值
//	p = 20;
//	printf("%d\n", num);
//	return 0;
//}





//练习strlen库函数模拟实现
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const  char * arr)
//{
//	assert(arr != NULL);//断言指针变量
//	int len = 0;
//	while (*arr++)//'\0'对应as码是0；
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


////改进版
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const  char * arr)//size_t表示无符号数，因为字符串长度不可能为负数
//                                   //size_t==unsigned int 
//{
//	assert(arr != NULL);//断言指针变量
//	size_t len = 0;
//	while (*arr++)//'\0'对应as码是0；
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%d\n", my_strlen(arr));//链式访问
//	return 0;
//}





//作业
//#include <stdio.h>
//int main()
//{
//	int a, b, c; 
//	a = 5;
//	c = ++a; // lc = 6 a = 6
//	b = ++c, c++, ++a, a++; // c = 8 a = 8 b = 7 
//	b+= a++ + c; //b=23 a=9
//   // 9 23 8
//	printf("a = %d b = %d c = %d \n: ", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int Numberof1(int n)//求一个数的二进制中有几个1
////                    该版本有bug，负数不行
//{
//	int count = 0;
//	while (n)
//	{
//
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//改进版
//int Numberof1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)//按位与的概念需理解
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 15;
//	int ret = Numberof1(num);
//	printf("ret=%d\n", ret);
//}
//
////按位与
// 1101    13
// 0001    1
// 0001
// 大概意思就是二进制数有0变0，无0变1
// 
//
//方法3
//#include<stdio.h>
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 15;
//	int ret = Numberof1(num);
//	printf("ret=%d\n", ret);
//}
//1111     n
//1101     n-1
//1100     n
//1011     n-1
//1000     n
//0111     n-1
//0000     n
//
//




 



////12_12_text
//#include<stdio.h>
//int max_apnum(int x, int y)
//{
//	int r = 0;//余数变量
//	while (y > 0)
//	{
//		if (x < y)//判断x与y的大小
//		{
//			int t = x;
//			x = y;
//			y = t;
//		}
//		r = x % y;
//		x = y;
//		y = r;
//	}
//	return x;
//}
//int min_mlpnum(int x, int y)
//{
//	int m = x > y ? x : y;
//	while (m)
//	{
//		if (m % x == 0 && m % y == 0)
//		{
//			return m;
//			break;
//		}
//		m++;
//	}
//}
//int main()
//{
//	int a = 0, b = 0;
//	int max_num = 0;
//	int min_num = 0;
//	scanf("%d%d", &a, &b);
//	max_num=max_apnum(a,b);//最大公约数函数
//	min_num=min_mlpnum(a,b);//最小公倍数函数
//	printf("最大公约数是%d\n", max_num);
//	printf("最小公倍数是%d\n", min_num);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 1;
//	scanf("%d", &num);
//	while (i<=num)
//	{
//		if (num % i == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}