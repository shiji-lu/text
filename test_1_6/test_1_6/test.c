#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	void(*pf)() = &test;
//	void(*pf1)() = test;
//	printf("%p\n", *pf);
//	printf("%p\n", *pf1);
//
//	return 0;
//int Add(int x,int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = 0;
//	int (*pf)(int, int) = &Add;
//	ret = (*pf)(2, 5);
//	printf("ret=%d\n", ret);
//	return 0;
//}




//ָ�����
	//#include<stdio.h>
	//int main()
	//{
	//	(*(void (*)())0)();
	//	//ͻ�ƿ���0��
	//	//������ǿ��ת�����ͱ��磺(char)0 ��0ת��Ϊchar����
	//	//(void (*)())0�е�  void (*)()  ��ǿ��ת�������� ����ָ������
	//	//*(void (*)())0������0��ַ���ĺ���
	//	//�����������޲�
	//
	//	return 0;
	//}


	//���μ�������ģ��
	/*#include<stdio.h>
	int Add(int x,int y)
	{
		return x + y;
	}
	
	int Sub(int x, int y)
	{
		return x - y;
	}
	
	int Mul(int x, int y)
	{
		return x * y;
	}
	
	int Div(int x, int y)
	{
		return x / y;
	}
	void menu()
	{
		printf("****************\n");
		printf("**1.add 2.sub **\n");
		printf("**3.mul 4.div **\n");
		printf("**   0.exit   **\n");
		printf("****************\n");
	}
	int main()
	{
		int input = 0;
		do {
			menu();
			printf("��ѡ��");
			scanf("%d", &input);
			printf("����������������>");
			int x = 0;
			int y = 0;
			scanf("%d%d", &x, &y);
			int ret = 0;
			switch (input)
			{
			case 1:
				ret=Add(x, y);
				break;
			case 2:
				ret = Sub(x, y);
				break;
			case 3:
				ret = Mul(x, y);
				break;
			case 4:
				ret = Div(x, y);
				break;
			case 0:
				printf("�Ƴ�����\n");
				break;
			default:
				printf("���������������\n");
				break;
			}
			printf("ret=%d\n", ret);
		} while (input);
		return 0;
	}*/



	//�޸ĺ�
	/*#include<stdio.h>
	int Add(int x, int y)
	{
		return x + y;
	}
	
	int Sub(int x, int y)
	{
		return x - y;
	}
	
	int Mul(int x, int y)
	{
		return x * y;
	}
	
	int Div(int x, int y)
	{
		return x / y;
	}
	void menu()
	{
		printf("****************\n");
		printf("**1.add 2.sub **\n");
		printf("**3.mul 4.div **\n");
		printf("**   0.exit   **\n");
		printf("****************\n");
	}
	int main()
	{
		int input = 0;
		do {
			menu();
			printf("��ѡ��");
			scanf("%d", &input);
			int x = 0;
			int y = 0;
			int ret = 0;
			switch (input)
			{
			case 1:
				printf("����������������>");
				scanf("%d%d", &x, &y);
				ret = Add(x, y);
				printf("ret=%d\n", ret);
				break;
			case 2:
				printf("����������������>");
				scanf("%d%d", &x, &y);
				ret = Sub(x, y);
				printf("ret=%d\n", ret);
				break;
			case 3:
				printf("����������������>");
				scanf("%d%d", &x, &y);
				ret = Mul(x, y);
				printf("ret=%d\n", ret);
				break;
			case 4:
				printf("����������������>");
				scanf("%d%d", &x, &y);
				ret = Div(x, y);
				printf("ret=%d\n", ret);
				break;
			case 0:
				printf("�˳�����\n");
				break;
			default:
				printf("���������������\n");
				break;
			}
		} while (input);
		return 0;
	}*/


	//����ָ������Ķ�����Ӧ��
	//#include<stdio.h>
	//int main()
	//{
	//	int (*p)(int, int);//����ָ��
	//	int (*p[5])(int, int);//����ָ������
	//	return 0;
	//}
	
	#include<stdio.h>
	int Add(int x, int y)
	{
		return x + y;
	}
	
	int Sub(int x, int y)
	{
		return x - y;
	}
	
	int Mul(int x, int y)
	{
		return x * y;
	}
	
	int Div(int x, int y)
	{
		return x / y;
	}
	void menu()
	{
		printf("****************\n");
		printf("**1.add 2.sub **\n");
		printf("**3.mul 4.div **\n");
		printf("**   0.exit   **\n");
		printf("****************\n");
	}
	int main()
	{
		int input = 0;
		do {
			menu();
			//����ָ�������Ӧ��,ͬ���͵Ŀ�����һ������
			int (*parr[5])(int, int) = { NULL, Add,Sub,Mul,Div };//�պ������±��Ӧ�˵����ֹ��ܼ�
			printf("��ѡ��");
			scanf("%d", &input);
			if (input >= 1 && input <= 4)
			{
				int x = 0;
				int y = 0;
				int ret = 0;
				printf("������������������");
				scanf("%d%d", &x, &y);
				ret = (parr[input])(x, y);
				printf("ret=%d\n", ret);
			}
			else if (input == 0)\
			{
				printf("�˳�����\n");
				break;
			}
			else
			{
				printf("���������������\n");
			}
		} while (input);
		return 0;
	}






	//int arr[10];
	//����Ԫ�������� int
	//arr����������� int[10];

	//����ָ�������-����
	//ȡ������ָ������ĵ�ַ
	//��������
	//int arr[5];
	//int(*p1)[5] = &arr;
	//
	//����ָ�������
	//int*arr[5];
	//int*��*p2��[5]=&arr;
	//p2��ָ������ָ�����顿��ָ��

	//����ָ������
	//&����ָ������

	//int(*p)(int, int);//����ָ��
	//int(*p2[4]) (int��int);//����ָ�������
	//int(*(*p3)[4])(int, int) = &p2;//ȡ�����Ǻ���ָ������ĵ�ַ
	//                               p3����һ��ָ�򡾺���ָ������顿��ָ��

	//ָ�����
	//#include<stdio.h>
	//int main()
	//{
	//	(*(void (*)())0)();
	//	//ͻ�ƿ���0��
	//	//������ǿ��ת�����ͱ��磺(char)0 ��0ת��Ϊchar����
	//	//(void (*)())0�е�  void (*)()  ��ǿ��ת�������� ����ָ������
	//	//*(void (*)())0������0��ַ���ĺ���
	//	//�����������޲�
	//
	//	return 0;
	//}


	//���μ�������ģ��
	//#include<stdio.h>
	//int Add(int x,int y)
	//{
	//	return x + y;
	//}
	//
	//int Sub(int x, int y)
	//{
	//	return x - y;
	//}
	//
	//int Mul(int x, int y)
	//{
	//	return x * y;
	//}
	//
	//int Div(int x, int y)
	//{
	//	return x / y;
	//}
	//void menu()
	//{
	//	printf("****************\n");
	//	printf("**1.add 2.sub **\n");
	//	printf("**3.mul 4.div **\n");
	//	printf("**   0.exit   **\n");
	//	printf("****************\n");
	//}
	//int main()
	//{
	//	int input = 0;
	//	do {
	//		menu();
	//		printf("��ѡ��");
	//		scanf("%d", &input);
	//		printf("����������������>");
	//		int x = 0;
	//		int y = 0;
	//		scanf("%d%d", &x, &y);
	//		int ret = 0;
	//		switch (input)
	//		{
	//		case 1:
	//			ret=Add(x, y);
	//			break;
	//		case 2:
	//			ret = Sub(x, y);
	//			break;
	//		case 3:
	//			ret = Mul(x, y);
	//			break;
	//		case 4:
	//			ret = Div(x, y);
	//			break;
	//		case 0:
	//			printf("�Ƴ�����\n");
	//			break;
	//		default:
	//			printf("���������������\n");
	//			break;
	//		}
	//		printf("ret=%d\n", ret);
	//	} while (input);
	//	return 0;
	//}



	//�޸ĺ�
	//#include<stdio.h>
	//int Add(int x, int y)
	//{
	//	return x + y;
	//}
	//
	//int Sub(int x, int y)
	//{
	//	return x - y;
	//}
	//
	//int Mul(int x, int y)
	//{
	//	return x * y;
	//}
	//
	//int Div(int x, int y)
	//{
	//	return x / y;
	//}
	//void menu()
	//{
	//	printf("****************\n");
	//	printf("**1.add 2.sub **\n");
	//	printf("**3.mul 4.div **\n");
	//	printf("**   0.exit   **\n");
	//	printf("****************\n");
	//}
	//int main()
	//{
	//	int input = 0;
	//	do {
	//		menu();
	//		printf("��ѡ��");
	//		scanf("%d", &input);
	//		int x = 0;
	//		int y = 0;
	//		int ret = 0;
	//		switch (input)
	//		{
	//		case 1:
	//			printf("����������������>");
	//			scanf("%d%d", &x, &y);
	//			ret = Add(x, y);
	//			printf("ret=%d\n", ret);
	//			break;
	//		case 2:
	//			printf("����������������>");
	//			scanf("%d%d", &x, &y);
	//			ret = Sub(x, y);
	//			printf("ret=%d\n", ret);
	//			break;
	//		case 3:
	//			printf("����������������>");
	//			scanf("%d%d", &x, &y);
	//			ret = Mul(x, y);
	//			printf("ret=%d\n", ret);
	//			break;
	//		case 4:
	//			printf("����������������>");
	//			scanf("%d%d", &x, &y);
	//			ret = Div(x, y);
	//			printf("ret=%d\n", ret);
	//			break;
	//		case 0:
	//			printf("�˳�����\n");
	//			break;
	//		default:
	//			printf("���������������\n");
	//			break;
	//		}
	//	} while (input);
	//	return 0;
	//}


	//����ָ������Ķ�����Ӧ��
	//#include<stdio.h>
	//int main()
	//{
	//	int (*p)(int, int);//����ָ��
	//	int (*p[5])(int, int);//����ָ������
	//	return 0;
	//}

//#include<stdio.h>
//	int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****************\n");
//	printf("**1.add 2.sub **\n");
//	printf("**3.mul 4.div **\n");
//	printf("**   0.exit   **\n");
//	printf("****************\n");
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		//����ָ�������Ӧ��,ͬ���͵Ŀ�����һ������
//		int (*parr[5])(int, int) = { NULL, Add,Sub,Mul,Div };//�պ������±��Ӧ�˵����ֹ��ܼ�
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			int ret = 0;
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			ret = (parr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)\
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	} while (input);
//	return 0;
//}
