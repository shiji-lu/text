#define _CRT_SECURE_NO_WARNINGS 1
//qsort使用方法


//void qsort(void* base,//base中存放的是待排序数据中第一个对象的地址
//			size_t num, //排序数据元素的个数
//			size_t size, //排序数据中一个元素的大小，单位是字节
//			int (*compar)(const void* e1, const void* e2)//用来比较待排序数组的2个元素
//			);//需要引用头文件<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
//int cmp(const void* e1, const void* e2) //使用者自己写强制转化的类型
//{
//	return (*(int*)e1 - *(int*)e2);
//}

//int main()
//{
//	int arr[] = {99,25,777,6666,266,33,999};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;



////结构体exp
//struct Stu {
//	char name[20];
//	int age;
//	int id;
//};
//int stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->id - ((struct Stu*)e2)->id;
//}
//int main()
//{
//	struct Stu s[3] = { {"zhangsan", 30,226},{"lisi", 34,222},{"wangwu", 20,223} };
//	int sz = sizeof(s) / sizeof(s[0]);//结构体就相当于数组
//	qsort(s, sz, sizeof(s[0]), stu_by_age);
//	
//	return 0;
//}

//首先回忆一下冒泡排序法
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		//控制趟数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////接下来用冒泡排序模拟qsort函数
//void buff_qsort(void* base,//base中存放的是待排序数据中第一个对象的地址
//	int sz, //排序数据元素的个数
//	int width, //排序数据中一个元素的大小，单位是字节
//	int (*cmp)(const void* e1, const void* e2)//用来比较待排序数组的2个元素
//)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//比较
//			if ((cmp(char*)base + j * width, cmp(char*)base + (j + 1) * width) > 0)
//			{
//
//			}
//		}
//	}
//}
//

int main()
{

		char name[20];
		int num;
		scanf_s("name=%s num=%d", name, &num);
		printf("name=%s num=%d", name, num);
		
		return 0;
		
	
}