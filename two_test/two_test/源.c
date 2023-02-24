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
//	printf("a=%d，b=%d", a, b);
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
//		av = av + x[i] / N;//求平均值的方法二
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

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define N 10
typedef struct ss
{
	char num[10];
	int s;
} STU;
void fun(STU a[], STU* s)
{
	int i = 0;
	
	*s = a[0];
	for (i = 0; i < N; i++)
	{
		if (s->s > a[i].s)
			*s = a[i];
	}

}
void main()
{
	FILE* wf;
	STU a[N] = { { "A01",81},{ "A02",89},{ "A03",66},{ "A04",87},{ "A05",77},
	{ "A06",90},{ "A07",79},{ "A08",61},{ "A09",80},{ "A10",71} }, m;
	int i;
	system("CLS");
	printf("*****The original data*****\n");
	for (i = 0; i < N; i++)
		printf("No=%s Mark=%d\n", a[i].num, a[i].s);
	fun(a, &m);
	printf("*****THE RESULT*****\n");
	printf("The lowest :%s, %d\n", m.num, m.s);
	/******************************/
	wf = fopen("out.dat", "w");
	fprintf(wf, "%s, %d", m.num, m.s);
	fclose(wf);
	/*****************************/
}
