#define _CRT_SECURE_NO_WARNINGS 1

//�ַ�������
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//
//	int i = 0;
//	
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
// 
// 
// 
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	//���������
//
//	int i = 0;
//    //ÿѭ��һ�Σ���ӡһ��.
//	//ÿһ����2������ɣ��ո���ַ�
//	for (i = 0; i < 5; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//
//		//�ַ�
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�ַ�֮���ת��
//#include<stdio.h>
//int main()
//{
//	char c1 = 'C' + 4;
//	char c2 = 'h' + 4;
//
//	char c3 = 'i' + 4;
//	char c4 = 'n' + 4;
//	char c5 = 'a' + 4;
//	printf("%c%c%c%c%c", c1, c2, c3, c4, c5);
//	return 0;
//}

//����


//putchar��ϰ
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'C','h','i','n','a' };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		putchar(arr[i] + 4);
//	}
//	return 0;
//}

//������С��Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 0.exit *****\n");
	printf("******************\n");
}
void game()
{
	//�������ʵ��
	int ret=rand() % 100;
	
	//printf("%d", ret);
	//������
	while (1)
	{
		int guess = 0;
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
			printf("�¶���\n");
	}
}

int main()
{
	int input = 0;
	
    menu();
	do
	{
		srand((unsigned int)time(NULL));
		printf("��ѡ�� ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ���������\n");
			puts("���ַ�Χ��0-100");
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	return 0;
}