#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	printf("������һ��������5λ����������");
	while (~scanf("%d", &num))
	{
		if (num < 0 || num > 99999)
		{
			printf("����������������룺");
		}
		else
		{
			if (num > 9999)
			{
				printf("�������5λ��\n");
			}
			else if (num > 999)
			{
				printf("�������4λ��\n");
			}
			else if (num > 99)
			{
				printf("�������3λ��\n");
			}
			else if (num > 9)
			{
				printf("�������2λ��\n");
			}
			else
			{
				printf("�������1λ��\n");
			}
		}
		
	}

	return 0;
}
