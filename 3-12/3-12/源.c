#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char ch[] = "123456";
//	while (ch[i++])
//	{
//	}
//	i-=2;//这俩有差别
//	/*while (ch[i])
//	{
//		i++;
//	}
//	i--;*/
//	printf("%d ", i);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0, k = 0;
//	int num = 0;
//	int x;
//	scanf("%d", &x);
//	int pp[100] = { 0 };
//	for (i = 1; i <= x; i++)
//	{
//		if (x % i == 0 && i % 2 != 0)
//		{
//			num++;
//			pp[j++] = i;
//		}
//	}
//	pp[j] = '\0';
//	for (i = 0; i < j; i++)
//	{
//		for (k = 0; k < j - 1 - i; k++)
//		{
//			if (pp[j] > pp[j + 1])
//			{
//				int t = pp[j];
//				pp[j] = pp[j + 1];
//				pp[j + 1] = t;
//			}
//		}
//	}
//	
//	return 0;
//}
//
//#include <stdio.h>
//#define N 5
//
//
//int main()
//{
//    int a[N][N], i, j, k, m;
//    if (N % 2 == 0)
//        m = N / 2;
//    else
//        m = N / 2 + 1;
//    for (i = 0; i < m; i++)
//    {
//        for (j = i; j < N - i; j++)
//            a[i][j] = a[N - i - 1][j] = i + 1;
//        for (k = i + 1; k < N - i; k++)
//            a[k][i] = a[k][N - i - 1] = i + 1;
//    }
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            printf("%d\t", a[i][j]);
//        }
//        printf("\n");
//    }
//
//
//
//    return 0;
//}
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("可以构成三角形");
    }
    else
    {
        printf("NO"); 
    }
    return 0;
}