#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j,  j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float a[5][5] = { 0 };//����5*5����������
//	int i = 0;
//	int j = 0;
//	float sum[5] = { 0 };
//	float SUM = 0;
//	float avg[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)//����������������������Ϊѧ���ɼ�
//		{
//			scanf("%f", &a[i][j]);
//			SUM += a[i][j];
//		}
//		sum[i] = SUM;
//		SUM = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		avg[i] = sum[i] / 3.0;
//		a[i][3] = sum[i];
//		a[i][4] = avg[i];
//	}
//	printf("��������\n");
//	printf("�ɼ�1\t�ɼ�2\t�ɼ�3\t�ܷ�\tƽ����\n");
//	printf("-----------------------------------------------\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%.2f\t", a[i][j]);
//
//		}
//		printf("\n");
//		printf("-----------------------------------------------\n");
//	}
//	return 0;
//}
//




////��������
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a[5][3] = { 0 };
//	int sum[5] = { 0 };
//	int avg[5] = { 0 };
//	int SUM = 0;
//	printf("������5λͬѧ�ĳɼ�,ÿ�����ƣ�\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//			SUM += a[i][j];
//		}
//		sum[i] = SUM;
//		avg[i] = sum[i] / 3;
//		printf("��%dλ�ܷ���%d\t",i+1, sum[i]);
//		printf("��%dλƽ������%d\t",i+1, avg[i]);
//		printf("\n");
//		SUM = 0;
//	}
//	return 0;
//}

////����������
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,10,110};
//	int arr2[] = { 2,44,6,8,10,101};
//	int c[12] = { 0 };
//	int i = 0;
//	printf("����Ϊ��");
//	for (i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				printf("%d ", arr1[i]);
//			}
//		}
//		
//	}
//	printf("\n");
//	printf("����Ϊ��");
//	for (i = 0; i < 6; i++)
//	{
//		c[i] = arr1[i];
//	}
//	int j = 0, q = 0,count = 6;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0,q=0; j < 6; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				q = 1;
//				break;
//			}
//		}
//		if (q == 0)
//		{
//			c[i + 6] = arr2[i];
//			count++;
//		}
//	}
//
//	
//	for (i = 0; i <= count; i++)
//	{
//		if (c[i] == 0)
//		{
//			continue;
//		}
//		printf("%d ", c[i]);
//	}
//	printf("\n");
//	return 0;
//
//}


////�ṹ�����
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int  age;
//	char id[20];
//};
//void print1(struct stu t)//��ֵ����
//{
//	printf("%s %s %d\n", t.name, t.id, t.age);
//}
//void print2(struct stu*ps)//��ַ����
//{
//	printf("%s %s %d\n", ps->name, ps->id, ps->age);//ָ����ʽ
//}
//int main()
//{
//	struct stu s = { "lu",19,"2201102" };
//	printf("%d\n", s.age);
//	printf("%s\n", s.id);
//	printf("%s\n", s.name);//%s���ַ�����
//	print1(s);
//	print2(&s);
//	return 0;
//}




//���Լ���
//1)F5ֱ�ӵ��ԣ�F9�Ӷϵ���ȡ���ϵ㣬��F9��F5���ֱ����������Ϊ�����Ĵ���Ƭ��
//Ȼ��F10����̵���
//2)F11�����
//F12��ݶ�λ


//12_11
#/*include<stdio.h>
int main()
{
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}
	return 0;
}*/

//constʹ��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[10] = "xxxxxxxx";
//	char arr2[] = "hello";
//	strcpy(arr1,arr2);//����������Ŀ�ģ���ʼ������Ҫ����ͷ�ļ�string.h
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//�汾1
//void my_strcpy(char * dist,char * str)
//{
//	while (*dist != '\0')
//	{
//		*dist = *str;
//		*dist++;
//		*str++;
//	}
//	*dist = *str;
//}

//�汾2�������Ż�
//void my_strcpy(char* dist, char* str)
//{
//	while (*dist != '\0')
//	{
//		*dist++ = *str++;
//	}
//	*dist = *str;
//}


////�汾3���������Ż�
//void my_strcpy(char* dist, char* str)
//{
//	while (*dist++ = *str++)//���ܿ���hello\0,�����ж�\0�ģ���\0��as����0��Ϊ��
//	{
//		;
//	}
//}


//�汾4����������Ż����𽥳�Ϊ�⺯��һ��һ������������
//void my_strcpy(char* dist, char* str)
//{
//	assert(dist!=NULL);//���ԣ���Ҫ����ͷ�ļ�assert.h
//	assert(str!=NULL);
//	while (*dist++ = *str++)//���ܿ���hello\0,�����ж�\0�ģ���\0��as����0��Ϊ��
//	{
//		;
//	}
//}


////�����Ż�����
//char* my_strcpy(char* dist,const char* str)
//{
//	char* ret = dist;
//	while (*dist++ = *str++)//���ܿ���hello\0,�����ж�\0�ģ���\0��as����0��Ϊ��
//	{
//		;
//	}
// return ret;//����Ŀ�����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[10] = "xxxxxxxx";
//	char arr2[] = "hello";
//	//����������Ŀ�ģ���ʼ),�Լ�дһ��ͬ�⹦�ܵĿ⺯��ģ���ʼ������Ŀ��
//	printf("%s\n", my_strcpy(arr1, arr2));//������ʽ����
//	return 0;
//}


//const
//1)
//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;//������num�ĵ�ַ�Ӷ��ı�num��ֵ
//	printf("%d\n", num);
//	return 0;
//}

//2)
//#include<stdio.h>
//int main()
//{
//    int num = 10;
//	const int* p = &num;
//	*p = 20;//constָ����ָ�����������ͨ��������ָ��������ı��ַ�ı���
//	             ���Ǳ������Ըı�
//	p = 20;
//	printf("%d\n", num);
//	return 0;
//}

//3)
//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int*const p = &num;
//	*p = 20;//constָ�����Ǳ��������������Ըı�
//	//             ���ǿ��Խ�����ָ��������ı������ַ��ֵ
//	p = 20;
//	printf("%d\n", num);
//	return 0;
//}





//��ϰstrlen�⺯��ģ��ʵ��
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const  char * arr)
//{
//	assert(arr != NULL);//����ָ�����
//	int len = 0;
//	while (*arr++)//'\0'��Ӧas����0��
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


////�Ľ���
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const  char * arr)//size_t��ʾ�޷���������Ϊ�ַ������Ȳ�����Ϊ����
//                                   //size_t==unsigned int 
//{
//	assert(arr != NULL);//����ָ�����
//	size_t len = 0;
//	while (*arr++)//'\0'��Ӧas����0��
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%d\n", my_strlen(arr));//��ʽ����
//	return 0;
//}





//��ҵ
//#include <stdio.h>
//int main()
//{
//	int a, b, c; 
//	a = 5;
//	c = ++a; // lc = 6 a = 6
//	b = ++c, c++, ++a, a++; // c = 8 a = 8 b = 7 
//	b+= a++ + c; //b=23 a=9
//   // 9 23 8
//	printf("a = %d b = %d c = %d \n: ", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int Numberof1(int n)//��һ�����Ķ��������м���1
////                    �ð汾��bug����������
//{
//	int count = 0;
//	while (n)
//	{
//
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//�Ľ���
//int Numberof1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)//��λ��ĸ��������
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 15;
//	int ret = Numberof1(num);
//	printf("ret=%d\n", ret);
//}
//
////��λ��
// 1101    13
// 0001    1
// 0001
// �����˼���Ƕ���������0��0����0��1
// 
//
//����3
//#include<stdio.h>
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 15;
//	int ret = Numberof1(num);
//	printf("ret=%d\n", ret);
//}
//1111     n
//1101     n-1
//1100     n
//1011     n-1
//1000     n
//0111     n-1
//0000     n
//
//




 



////12_12_text
//#include<stdio.h>
//int max_apnum(int x, int y)
//{
//	int r = 0;//��������
//	while (y > 0)
//	{
//		if (x < y)//�ж�x��y�Ĵ�С
//		{
//			int t = x;
//			x = y;
//			y = t;
//		}
//		r = x % y;
//		x = y;
//		y = r;
//	}
//	return x;
//}
//int min_mlpnum(int x, int y)
//{
//	int m = x > y ? x : y;
//	while (m)
//	{
//		if (m % x == 0 && m % y == 0)
//		{
//			return m;
//			break;
//		}
//		m++;
//	}
//}
//int main()
//{
//	int a = 0, b = 0;
//	int max_num = 0;
//	int min_num = 0;
//	scanf("%d%d", &a, &b);
//	max_num=max_apnum(a,b);//���Լ������
//	min_num=min_mlpnum(a,b);//��С����������
//	printf("���Լ����%d\n", max_num);
//	printf("��С��������%d\n", min_num);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 1;
//	scanf("%d", &num);
//	while (i<=num)
//	{
//		if (num % i == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}