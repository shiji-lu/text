#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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
//	printf("a=%d£¬b=%d", a, b);
//	return 0;
//}
void fun(int a[], int n)
{
	int i, t;
	for (i = 0; i < n / 2; i++)
	{
		t = a[i]; a[i] = a[n - 1 - i]; a[n - 1 - i] = t;
	}
}
int main()
{
	int k[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
	fun(k, 5);
	for (i = 2; i < 8; i++)
	{

		printf("%d", k[i]); printf("\n");
	}
	return 0;
}