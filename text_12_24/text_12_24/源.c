#define _CRT_SECURE_NO_WARNINGS 1
//����ָ��
//

#include<stdio.h>
void add()
{

}
int main()
{
	printf("%p\n", &add);
	printf("%p\n", add);//����ָ��&add===add
	//���������ǵ�ַ===>�����Ķ���
	//�����鲻ͬ����������������Ԫ�ص�ַ

	return 0;
}