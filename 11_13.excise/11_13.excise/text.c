#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("&d", &n);
//	int arr[n+1];//�䳤����
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int a[100][100] = { 0 }, b[100][100] = { 0 };
//    scanf("%d%d", &m, &n);
//    int i = 0;
//    int j = 0;
//    int count = 0.0;
//    //��������
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)  
//        {
//             scanf("%d", &a[i][j]);
//        }
//    }
//    printf("\n");
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    //����ͬԪ�صĸ���
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (a[i][j] == b[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    //�����ٶ�ע�����100
//    printf("\n%.2f\n", 100.0 * count / (m * n));
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    float num = 0.0;
//    float sum = 0.0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f", &num);
//        sum += num;
//    }
//    printf("%.2f", sum / 5.0);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int sum = 0;
//    int min = 100;//������Сֵ��100
//    int max = 0;//�������ֵ��0
//    int score = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &score);//����
//        sum += score;//���
//        if (score > max)
//            max = score;//�����ֵ
//        if (score < min)
//            min = score;//����Сֵ
//    }
//    printf("%.2f\n", (sum - min - max) / 5.0);
//    return 0;
//}

//
//#include <stdio.h>
//int main() {
//
//    //�洢����
//    int arr[7] = { 0 };
//    int i = 0;
//    while (scanf("%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
//        &arr[5], &arr[6]) != EOF) 
//    {
//        //�����ֵ
//        int max = arr[0];
//        for (i = 0; i < 7; i++) {
//            if (arr[i] > max) {
//                max = arr[i];
//            }
//        }
//        //����Сֵ
//        int min = arr[0];
//        for (i = 0; i < 7; i++) {
//            if (arr[i] < min) {
//                min = arr[i];
//            }
//        }
//        //���
//        int sum = 0;
//        for (i = 0; i < 7; i++) {
//            sum = sum + arr[i];
//        }
//        //��ƽ��ֵ
//        float ret = (sum - max - min) / 5.0;
//        printf("%.2f\n", ret);
//    }
//    return 0;
//
//}
//
//#include<stdio.h>
//int main()
//{
//    int arr[7] = { 0 };
//    while (~scanf("%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]))
//    {
//        int i = 0;
//        int sum = 0;//��ѭ�������
//        int min = arr[0];
//        int max = arr[0];
//        for (i = 0; i < 7; i++)
//        {
//            if (arr[i] < min)
//            {
//                min = arr[i];
//            }
//            if (arr[i] > max)
//            {
//                max = arr[i];
//            }
//        }
//        
//        for (i = 0; i < 7; i++)
//        {
//            sum += arr[i];
//        }
//        float ret = sum - min - max;
//        printf("%.2f\n", ret * 1.0 / 5.0);
//    }
//    return 0;
//}
//



