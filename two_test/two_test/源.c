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
//	//这里的p就是一个野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存了
//	//2.越界访问
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
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p = NULL;
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C语言本身是不会检查数据的越界行为的
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
//	//指针和指针相减的前提：
//	//两个指针指向同一块空间
//	printf("%d\n", &arr[9] - &c[0]);//err
//
//	//printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}


#include <string.h>
//计数器
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
//递归
//指针-指针

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
//	//strlen(); - 求字符串长度
//	//递归
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素的地址
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
//	int* p = arr;//数组名
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//[] 是一个操作符  2和arr是两个操作数
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
//	int* pa = &a;//pa是指针变量，一级指针
//
//	//ppa就是一个二级指针变量
//	int ** ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
//	int*** pppa = &ppa;
//
//	return 0;
//}

//指针数组 - 数组
// 
//好孩子

//int main()
//{
//	int arr[10];//整形数组 - 存放整形的数组就是整形数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* pch[5];
//
//	return 0;
//}
//


//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//} s1,s2;//s1和s2也是结构体变量
////s1,s2是全局变量
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "202005034"};//对象
//	//.  ->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	/*struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);*/  //指针可以用->
//	//对象用.
//
//	return 0;
//}
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
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
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
//	//s是局部变量
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "202005034" };//对象
//	//写一个函数打印s的内容
//	print1(s);
//	print2(&s);
//
//	return 0;
//}













//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//
//	return 0;
//}

//#include  <stdio.h>
//#define    N    5
//typedef struct  student {
//    long  sno;
//    char  name[10];
//    float  score[3];
//} STU;
//void fun(char* filename, STU  n)
//{
//    FILE* fp;
//    /**********found**********/
//    fp = fopen(filename, "rb+");
//    /**********found**********/
//    fseek(fp, -(long)sizeof(STU), SEEK_END);
//    /**********found**********/
//    fwrite(&n, sizeof(STU), 1, fp);
//    fclose(fp);
//}
//void main()
//{
//    STU  t[N] = { {10001,"MaChao", 91, 92, 77}, {10002,"CaoKai", 75, 60, 88},
//              {10003,"LiSi", 85, 70, 78},    {10004,"FangFang", 90, 82, 87},
//              {10005,"ZhangSan", 95, 80, 88} };
//    STU  n = { 10006,"ZhaoSi", 55, 70, 68 }, ss[N];
//    int  i, j;      FILE* fp;
//    fp = fopen("student.dat", "wb");
//    fwrite(t, sizeof(STU), N, fp);
//    fclose(fp);
//    fp = fopen("student.dat", "rb");
//    fread(ss, sizeof(STU), N, fp);
//    fclose(fp);
//    printf("\nThe original data :\n\n");
//    for (j = 0; j < N; j++)
//    {
//        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
//        for (i = 0; i < 3; i++)  printf("%6.2f ", ss[j].score[i]);
//        printf("\n");
//    }
//    fun("student.dat", n);
//    printf("\nThe data after modifing :\n\n");
//    fp = fopen("student.dat", "rb");
//    fread(ss, sizeof(STU), N, fp);
//    fclose(fp);
//    for (j = 0; j < N; j++)
//    {
//        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
//        for (i = 0; i < 3; i++)  printf("%6.2f ", ss[j].score[i]);
//        printf("\n");
//    }
//}



//#include<string.h>
//#include<stdio.h>
//#define N 80
//int fun(char* s)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//void main()
//{
//	FILE* wf;
//	char line[N];
//	int num = 0;
//	printf("Enter a string:\n ");
//	gets(line);
//	num = fun(line);
//	printf("The number of word is:%d\n\n ", num);
//	/******************************/
//	wf = fopen("out.dat", "w");
//	fprintf(wf, "%d", fun("a big car"));
//	fclose(wf);
//	/*****************************/
//}




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
//		av = av + x[i] / N;
//	for (i = j = 0; i < N; i++)
//		/**********found**********/
//		if (x[i] > av)  y[j++] = x[i];
//	y[j] = -1;
//	return  av;
//}
//void main()
//{
//	int  i;    double  x[N], y[N];
//	for (i = 0; i < N; i++) { x[i] = rand() % 50; printf("%4.0f ", x[i]); }
//	printf("\n");
//	printf("\nThe average is: %f\n", fun(x, y));
//	for (i = 0; y[i] >= 0; i++)  printf("%5.1f ", y[i]);
//	printf("\n");
//}
//




////真题卷二  结构体应用
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
//	*s = a[0];
//	for (i = 0; i < N; i++)
//	{
//		if (a[i].s < s->s)
//		{
//			*s = a[i];
//		}
//	}
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







//
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#define  N  5
//double fun(int w[][N])
//{
//	int i, j, count = 0;
//	double sum = 0.0;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i == 0 || j == 0 || i == N - 1 || j == N - 1)//周边元素的和
//			{
//				sum += w[i][j];
//				count++;
//			}
//
//		}
//	}
//	return sum / count;
//}
//void main()
//{
//	FILE* wf;
//	int a[N][N] = { 0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1 };
//	int i, j;
//	double s;
//	system("CLS");
//	printf("*****The array*****\n ");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%4d ", a[i][j]);
//		}
//		printf("\n ");
//	}
//	s = fun(a);
//	printf("*****THE RESULT*****\n ");
//	printf("The sum is : %lf\n ", s);
//	/******************************/
//	wf = fopen("out.dat", "w");
//	fprintf(wf, "%lf", s);
//	fclose(wf);
//	/*****************************/
//}



//
//#include  <stdlib.h>
//#include  <stdio.h>
//#define   N   10
//double fun(double* x)
//{
//    int  i, j;    double  s, av, y[N];
//    s = 0;
//    for (i = 0; i < N; i++)  s = s + x[i];
//    /**********found**********/
//    av = s / N;
//    for (i = j = 0; i < N; i++)
//        if (x[i] > av) {
//            /**********found**********/
//            y[j++] = x[i];
//            x[i] = -1;
//        }
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        if (x[i] != -1) y[j++] = x[i];
//    for (i = 0; i < N; i++)x[i] = y[i];
//    return  av;
//}
//void main()
//{
//    int  i;     double  x[N];
//    for (i = 0; i < N; i++) { x[i] = rand() % 50; printf("%4.0f ", x[i]); }
//    printf("\n");
//    printf("\nThe average is: %f\n", fun(x));
//    printf("\nThe result :\n", fun(x));
//    for (i = 0; i < N; i++)  printf("%5.0f ", x[i]);
//    printf("\n");
//}
//






//
//
//#include  <stdlib.h>
//#include  <conio.h>
//#include  <stdio.h>
///*************found**************/
//void fun(char* s, int num[5])//????????
//{
//    int k, i = 5;
//    for (k = 0; k < i; k++)
//        /*************found**************/
//        num[k] = 0;
//    for (; *s; s++)
//    {
//        i = -1;
//        /*************found**************/
//        switch (*s)
//        {
//        case 'a': case'A': {i = 0; break; }
//        case 'e': case 'E': {i = 1; break; }
//        case 'i': case 'I': {i = 2; break; }
//        case 'o': case 'O': {i = 3; break; }
//        case 'u': case 'U': {i = 4; break; }
//        }
//        if (i >= 0)
//            num[i]++;
//    }
//}
//void main()
//{
//    char s1[81]; int num1[5], i;
//    system("CLS");
//    printf("\nPlease enter a string: ");
//    gets(s1);
//    fun(s1, num1);
//    for (i = 0; i < 5; i++) printf("%d ", num1[i]);
//    printf("\n");
//}



//
//#include <stdio.h>
//double fun(double  h)
//{
//    long t = (int)(h * 1000 + 5) / 10;//加5法
//    return (double)t / 100;
//}
//
//main()
//{
//    double  a; void NONO();
//    printf("Enter  a:  "); scanf("%lf", &a);
//    printf("The original data is :   ");
//    printf("%f \n\n", a);
//    printf("The result :  %f\n", fun(a));
//    NONO();
//}
//
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
//    输出数据，关闭文件。 */
//    int i;
//    double a;
//    FILE* rf, * wf;
//
//    rf = fopen("in.dat", "r");
//    wf = fopen("out.dat", "w");
//    for (i = 0; i < 20; i++) {
//        fscanf(rf, "%lf", &a);
//        fprintf(wf, "%f\n", fun(a));
//    }
//    fclose(rf);
//    fclose(wf);
//}


//
//#include <stdio.h>
//void fun()
//{
//    int a[3][3], sum;
//    int i, j;
//    /*************found**************/
//    sum = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//            /*************found**************/
//            scanf("%d", &a[i][j]);
//    }
//    for (i = 0; i < 3; i++)
//        sum = sum + a[i][i];
//    printf("Sum=%d\n", sum);
//}
//void main()
//{
//    fun();
//}


//
//#include  <stdio.h>
//#define  N  4
//void fun(int(*a)[N], int* b)
//{
//    int  i, j;
//    for (i = 0; i < N; i++) {
//        /**********found**********/
//        b[i] = a[0][i];
//        for (j = 1; j < N; j++)
//            /**********found**********/
//            if (b[i] < a[j][i])
//                b[i] = a[j][i];
//    }
//}
//void main()
//{
//    int  x[N][N] = { {12,5,8,7},{6,1,9,3},{1,2,3,4},{2,8,4,3} }, y[N], i, j;
//    printf("\nThe matrix :\n");
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++) printf("%4d", x[i][j]);
//        printf("\n");
//    }
//    /**********found**********/
//    fun(x, y);
//    printf("\nThe result is:");
//    for (i = 0; i < N; i++)  printf("%3d", y[i]);
//    printf("\n");
//}
//




#include <stdio.h>
/*************found**************/
void fun(int* x, int* y)
{
	int t;
	/*************found**************/
	t = *x; *x = *y; *y = t;
}
void main()
{
	int a, b;
	a = 8;
	b = 3;
	fun(&a, &b);
	printf("%d  %d\n ", a, b);
}


