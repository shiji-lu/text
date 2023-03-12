#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//
//	int a1 = 0;
//	char c1 = 0;
//	char c2 = 0;
//	int a2 = 0;
//	scanf("%d%c%d%c", &a1, &c1, &a2, &c2);
//	return 0;
//
//}
//
//void upfst(char* p)
//{
//    int k = 0;
//    for (; *p; p++)
//        if (k)
//        {
//            if (*p == ' ')
//                k = 0;
//        }
//        else
//        {
//            if (*p != ' ')
//            {
//                k = 1;
//                *p = toupper(*p);
//            }
//        }
//}

//double fun(double  h)
//{
//	long ret = (h * 1000 + 5) / 10;
//	return(double)ret / 100;
//}//1234.567保留两位小数且利用四舍五入法

#include<stdio.h>
int main()
{
	char c1, c2, c3, c4, c5, c6;
	scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
	c5 = getchar();
	c6 = getchar();
	putchar(c1);
	putchar(c2);
	printf("%c%c\n", c5, c6);
	return 0;
}