#define _CRT_SECURE_NO_WARNINGS 1
//qsortʹ�÷���


//void qsort(void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//			size_t num, //��������Ԫ�صĸ���
//			size_t size, //����������һ��Ԫ�صĴ�С����λ���ֽ�
//			int (*compar)(const void* e1, const void* e2)//�����Ƚϴ����������2��Ԫ��
//			);//��Ҫ����ͷ�ļ�<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
//int cmp(const void* e1, const void* e2) //ʹ�����Լ�дǿ��ת��������
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



////�ṹ��exp
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
//	int sz = sizeof(s) / sizeof(s[0]);//�ṹ����൱������
//	qsort(s, sz, sizeof(s[0]), stu_by_age);
//	
//	return 0;
//}

//���Ȼ���һ��ð������
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		//��������
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


////��������ð������ģ��qsort����
//void buff_qsort(void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//	int sz, //��������Ԫ�صĸ���
//	int width, //����������һ��Ԫ�صĴ�С����λ���ֽ�
//	int (*cmp)(const void* e1, const void* e2)//�����Ƚϴ����������2��Ԫ��
//)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//�Ƚ�
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