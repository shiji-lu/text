#include<stdio.h>
int main()
{
	char name[20];
	int num;
	scanf_s("name=%s num=%d",name,&num);
	printf("name=%s num=%d",name,num);
	return 0;
	system("pause");
}