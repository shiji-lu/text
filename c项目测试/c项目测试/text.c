#define _CRT_SECURE_NO_WARNINGS 1

////��Ŀ1.��������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<sys/timeb.h>
//int main()
//{
//	clock_t start;
//	clock_t finsh;
//	double duration;//ʱ���
//	srand((unsigned int)time(NULL));
//	//printf("��Ϸ��ʼ���������\n");
//	//puts("���ַ�Χ��0-100");
//	int ret = rand() % 100;
//	int guess ;
//	int count = 0;
//	start = clock();
//    while(~scanf("%d", &guess))
//	{
//		if (guess > ret)
//		{
//			printf("�´���\n");
//			count++;
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//			count++;
//		}
//		else
//		{
//           printf("�¶���\n");
//		   finsh = clock();
//		   duration = (double)(finsh - start);//����ʱ���
//		   count++;
//		   printf("��һ������%d��", count);
//		   printf("�ܹ�����%lf����\n", duration);
//		   break;
//		}
//			
//	} 
//
//	return 0;
//}


////������
//#include<stdio.h>
//int main()
//{
//	double x = 0.0;
//	double y = 0.0;
//	char ch=0;
//	double ret = 0.0;
//	while (~scanf("%lf%c%lf",&x,&ch,&y))
//	{
//		switch (ch)
//		{
//		case '+':
//			ret = x + y;
//			break;
//		case '-':
//			ret = x - y;
//			break;
//		case '*':
//			ret = x * y;
//			break;
//		case '/':
//			ret = x / y;
//			break;
//		}
//		printf("%.2lf\n", ret);
//	}
//	return 0;
//}

//����һ����λ������ÿһλ�������������--С
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int ar[5];
//	printf("������һ����λ��\n");
//	while (~scanf("%d", &num))
//	{
//		int i = 0;
//		int ret = 0;
//		if (num > 9999 && num < 100000)
//		{
//			while (num > 0)
//			{
//				for (i = 0; i < 5; i++)
//				{
//					ret = num % 10;
//					num /= 10;
//					ar[i] = ret;
//				}
//			}
//			for (i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 4 - i; j++)
//				{
//					if (ar[j] < ar[j + 1])
//					{
//						int t = ar[j];
//						ar[j] = ar[j + 1];
//						ar[j + 1] = t;
//					}
//				}
//			}
//			for (i = 0; i < 5; i++)
//			{
//				printf("%d", ar[i]);
//			}
//			printf("\n");
//		}
//		else
//		{
//			printf("����������������룺");
//		}
//	}
//	
//	
//	return 0;
//}


//////Сѧ���������  ȫ�ֱ�����
#include<stdio.h>
int sum = 0;
int  TM1()
{
	printf("1.��ѧ����\n������52.1*10=��\n");
	int ret1 = 0;
	int count1 = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &ret1);
		if (ret1 == 521)
		{
			printf("�����\n");
			break;
		}
		else
		{
			printf("�𰸴���\n");
			count1++;
		}
	}
	switch (count1)
	{
	case 0:
		sum = sum + 25;
		break;
	case 1:
		sum = sum + 20;
		break;
	case 2:
		sum = sum + 15;
		break;
	case 3:
		sum = sum + 0;
		printf("��ȷ����521\n");
		break;
	}

}
int  TM2()
{
	printf("2.Ӣ����\n������lov_�ǰ�����˼ȱ�ٵ���ĸ\n");
	char ch = 0;
	int count2 = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		getchar();
		scanf("%c", &ch);
		if (ch == 'e')
		{
			printf("�����\n");
			break;
		}
		else
		{
			printf("�𰸴���\n");
			count2++;
		}
	}
	switch (count2)
	{
	case 0:
		sum = sum + 25;
		break;
	case 1:
		sum = sum + 20;
		break;
	case 2:
		sum = sum + 15;
		break;
	case 3:
		sum = sum + 0;
		printf("��ȷ����e\n");
		break;
	}

}
int  TM3()
{

	printf("3.Ӣ����\n������L��Ӧ��Сд��ĸ\n");
	char ch = 0;
	int count3 = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		getchar();
		scanf("%c", &ch);
		if (ch == 'l')
		{
			printf("�����\n");
			break;
		}
		else
		{
			printf("�𰸴���\n");
			count3++;
		}
	}
	switch (count3)
	{
	case 0:
		sum = sum + 25;
		break;
	case 1:
		sum = sum + 20;
		break;
	case 2:
		sum = sum + 15;
		break;
	case 3:
		sum = sum + 0;
		printf("��ȷ����l\n");
		break;
	}


}
int  TM4()
{

	printf("4.Ӣ����\nһ���ж��ٸ���д��ĸ\n");
	int ch = 0;
	int count4 = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		getchar();
		scanf("%d", &ch);
		if (ch == 26)
		{
			printf("�����\n");
			break;
		}
		else
		{
			printf("�𰸴���\n");
			count4++;
		}
	}
	switch (count4)
	{
	case 0:
		sum = sum + 25;
		break;
	case 1:
		sum = sum + 20;
		break;
	case 2:
		sum = sum + 15;
		break;
	case 3:
		sum = sum + 0;
		printf("��ȷ����26\n");
		break;
	}

}

int main()
{

	printf("�ܹ��ĵ���\nÿ��25��\n");

	TM1();
	TM2();
	TM3();
	TM4();
	if (sum >= 90)
	{
		printf("SMART\n");
	}
	else if (sum >= 80)
	{
		printf("GOOD\n");
	}
	else if (sum >= 70)
	{
		printf("OK\n");
	}
	else if (sum >= 60)
	{
		printf("PASS\n");
	}
	else
	{
		printf("TRY AGAIN\n");
	}
	//printf("�ܹ����%d", sum);
	return 0;
}


////Сѧ���������  �ֲ�������
//#include<stdio.h>
//int  TM1()
//{
//	printf("1.��ѧ����\n������52.1*10=��\n");
//	int ret1 = 0;
//	int count1 = 0;
//	int sum = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &ret1);
//		if (ret1 == 521)
//		{
//			printf("�����\n");
//			break;
//		}
//		else
//		{
//			printf("�𰸴���\n");
//			count1++;
//		}
//	}
//	switch (count1)
//	{
//	case 0:
//		sum = 25;
//		break;
//	case 1:
//		sum = 20;
//		break;
//	case 2:
//		sum = 15;
//		break;
//	case 3:
//		sum = 0;
//		printf("��ȷ����521\n");
//		break;
//	}
//	printf("���%d��\n", sum);
//	return sum;
//
//}
//int  TM2()
//{
//	printf("2.Ӣ����\n������lov_�ǰ�����˼ȱ�ٵ���ĸ\n");
//	char ch = 0;
//	int count2 = 0;
//	int sum = 0;
//	//getchar();
//	for (int i = 0; i < 3; i++)
//	{
//		getchar();
//		scanf("%c", &ch);
//		if (ch == 'e')
//		{
//			printf("�����\n");
//			break;
//		}
//		else
//		{
//			printf("�𰸴���\n");
//			count2++;
//		}
//	}
//	switch (count2)
//	{
//	case 0:
//		sum = 25;
//		break;
//	case 1:
//		sum = 20;
//		break;
//	case 2:
//		sum = 15;
//		break;
//	case 3:
//		sum = 0;
//		printf("��ȷ����e\n");
//		break;
//	}
//
//	printf("���%d��\n", sum);
//	return sum;
//}
//int  TM3()
//{
//
//	printf("3.Ӣ����\n������L��Ӧ��Сд��ĸ\n");
//	char ch = 0;
//	int count3 = 0;
//	int sum = 0;
//	//getchar();
//	for (int i = 0; i < 3; i++)
//	{
//		getchar();
//		scanf("%c", &ch);
//		if (ch == 'l')
//		{
//			printf("�����\n");
//			break;
//		}
//		else
//		{
//			printf("�𰸴���\n");
//			count3++;
//		}
//	}
//	switch (count3)
//	{
//	case 0:
//		sum = 25;
//		break;
//	case 1:
//		sum = 20;
//		break;
//	case 2:
//		sum = 15;
//		break;
//	case 3:
//		sum = 0;
//		printf("��ȷ����l\n");
//		break;
//	}
//
//	printf("���%d��\n", sum);
//	return sum;
//
//}
//int  TM4()
//{
//
//	printf("4.Ӣ����\nһ���ж��ٸ���д��ĸ\n");
//	int ch = 0;
//	int count4 = 0;
//	int sum = 0;
//	//getchar();
//	for (int i = 0; i < 3; i++)
//	{
//		getchar();
//		scanf("%d", &ch);
//		if (ch == 26)
//		{
//			printf("�����\n");
//			break;
//		}
//		else
//		{
//			printf("�𰸴���\n");
//			count4++;
//		}
//	}
//	switch (count4)
//	{
//	case 0:
//		sum = 25;
//		break;
//	case 1:
//		sum = 20;
//		break;
//	case 2:
//		sum = 15;
//		break;
//	case 3:
//		sum = 0;
//		printf("��ȷ����26\n");
//		break;
//	}
//
//	printf("���%d��\n", sum);
//	return sum;
//
//}
//
//int main()
//{
//
//	printf("�ܹ��ĵ���\nÿ��25��\n");
//	int sum = TM1() + TM2() + TM3() + TM4();
//	if (sum >= 90)
//	{
//		printf("SMART\n");
//	}
//	else if (sum >= 80)
//	{
//		printf("GOOD\n");
//	}
//	else if (sum >= 70)
//	{
//		printf("OK\n");
//	}
//	else if (sum >= 60)
//	{
//		printf("PASS\n");
//	}
//	else
//	{
//		printf("TRY AGAIN\n");
//	}
//	
//	return 0;
//}