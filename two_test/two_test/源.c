#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//main()
//{
//	int x = 1, y = 0, a = 0, b = 0;
//	switch (x)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0: a++; break;
//		case 1: b++; break;
//		}
//	case 2: a++; b++; break;
//	case 3: a++; b++;
//	}
//	printf("a=%d��b=%d", a, b);
//	return 0;
//}
//void fun(int a[], int n)
//{
//	int i, t;
//	for (i = 0; i < n / 2; i++)
//	{
//		t = a[i]; a[i] = a[n - 1 - i]; a[n - 1 - i] = t;
//	}
//}
//int main()
//{
//	int k[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
//	fun(k, 5);
//	for (i = 2; i < 8; i++)
//	{
//
//		printf("%d", k[i]); printf("\n");
//	}
//	return 0;
//}
// 
//main()
//{
//	int b[3][3] = { 0,1,2,0,1,2,0,1,2 }, i, j, t = 1;
//	for (i = 0; i < 3; i++)
//	{
//
//		for (j = i; j <= i; j++)
//		{
//			t += b[i][b[j][i]];
//		}
//	}
//	printf(" %d\n", t);
//	return 0;
//}
//
//
//#include <stdlib.h>
//#include <stdio.h>
//#define   N   10
//double fun(double  x[], double* y)
//{
//	int  i, j;    double  av;
//	/**********found**********/
//	av = 0.0;
//	/**********found**********/
//	for (i = 0; i < N; i++)
//		av = av + x[i] / N;//��ƽ��ֵ�ķ�����
//	for (i = j = 0; i < N; i++)
//		/**********found**********/
//		if (x[i] > av)  y[j++] = x[i];
//	y[j] = -1;
//	return  av;
//}
//void main()
//{
//	int  i;    double  x[N], y[N];
//	for (i = 0; i < N; i++) 
//	{ 
//		x[i] = rand() % 50; printf("%4.0f ", x[i]);
//	}
//	printf("\n");
//	printf("\nThe average is: %f\n", fun(x, y));
//	for (i = 0; y[i] >= 0; i++) 
//		printf("%5.1f ", y[i]);
//	printf("\n");
//}

//#include<stdio.h>
//#include<string.h>
//#include<conio.h>
//#include<stdlib.h>
//#define N 10
//typedef struct ss
//{
//	char num[10];
//	int s;
//} STU;
//void fun(STU a[], STU* s)
//{
//	int i = 0;
//	
//	*s = a[0];
//	for (i = 0; i < N; i++)
//	{
//		if (s->s > a[i].s)
//			*s = a[i];
//	}
//
//}
//void main()
//{
//	FILE* wf;
//	STU a[N] = { { "A01",81},{ "A02",89},{ "A03",66},{ "A04",87},{ "A05",77},
//	{ "A06",90},{ "A07",79},{ "A08",61},{ "A09",80},{ "A10",71} }, m;
//	int i;
//	system("CLS");
//	printf("*****The original data*****\n");
//	for (i = 0; i < N; i++)
//		printf("No=%s Mark=%d\n", a[i].num, a[i].s);
//	fun(a, &m);
//	printf("*****THE RESULT*****\n");
//	printf("The lowest :%s, %d\n", m.num, m.s);
//	/******************************/
//	wf = fopen("out.dat", "w");
//	fprintf(wf, "%s, %d", m.num, m.s);
//	fclose(wf);
//	/*****************************/
//}









#include <stdio.h>

//
//int main()
//{
//	//�����p����һ��Ұָ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ���
//	//2.Խ�����
//	/*int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}*/
//	//3.
//	return 0;
//}
//
//


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	printf("a = %d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C���Ա����ǲ��������ݵ�Խ����Ϊ��
//	int* p = NULL;
//
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//ָ���ָ�������ǰ�᣺
//	//����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9] - &c[0]);//err
//
//	//printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}


#include <string.h>
//������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�
//ָ��-ָ��

//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	//strlen(); - ���ַ�������
//	//�ݹ�
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//
//	int* p = arr;//������
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//[] ��һ��������  2��arr������������
//	//a+b
//	//b+a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//
//	//arr[2] --> *(arr+2)-->*(2+arr)-->2[arr]
//
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//2[arr] <==> *(2+arr)
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//
//	//ppa����һ������ָ�����
//	int ** ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
//	int*** pppa = &ppa;
//
//	return 0;
//}

//ָ������ - ����
// 
//�ú���

//int main()
//{
//	int arr[10];//�������� - ������ε����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5];
//
//	return 0;
//}
//


struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	//��Ա����
	struct B sb;
	char name[20];//����
	int age;//����
	char id[20];
} s1,s2;//s1��s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���

int main()
{
	//s�Ǿֲ�����
	struct Stu s = { {'w', 20, 3.14}, "����", 30, "202005034"};//����
	//.  ->
	//printf("%c\n", s.sb.c);
	//printf("%s\n", s.id);

	/*struct Stu* ps = &s;
	printf("%c\n", (*ps).sb.c);
	printf("%c\n", ps->sb.c);*/  //ָ�������->
	//������.

	return 0;
}
//
//
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];
//};
//
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w', 20, 3.14}, "����", 30, "202005034" };//����
//	//дһ��������ӡs������
//	print1(s);
//	print2(&s);
//
//	return 0;
//}













int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);

	return 0;
}