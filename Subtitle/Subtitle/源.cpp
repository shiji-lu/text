#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<graphics.h>//����easyxͼ�ο�
void setFont()
{
	LOGFONT f;
	gettextstyle(&f);//��ȡ��ǰ������
    f.lfHeight = 12;
	
	f.lfWeight = 0;//Ĭ��
	strcpy(f.lfFaceName, "����");//������������
	f.lfQuality = ANTIALIASED_QUALITY;//�����Ч��
	settextstyle(&f);//��������

}
int main()
{
	//����ͼ�ν���
	initgraph(80, 40, 1);
	char str[512];
	printf("����������˵�Ļ���");
	scanf("%s", &str);
	//
	int count = strlen(str) / 2;//���㺺�ָ���
	char**arry=(char**)malloc(sizeof(char*) * count);
	for (int i = 0; i < count; i++)
	{
		arry[i] = (char*)malloc(3);
		strncpy(arry[i], &str[i * 2],2);
		arry[i][2] = '\0';
	}

	//��һ��ͼƬ,Ȼ���ȡÿһ�����ص�
	IMAGE img;
	loadimage(&img, "y.png");
	int height = img.getheight();//ͼƬ�ĸ߶�
	int width = img.getwidth();//ͼƬ�Ŀ��
	//ʹ�ö�̬�ڴ����
	int*data=(int*)malloc(sizeof(int) * height * width);
	if (data == NULL)return -1;

	//���ù�������ȡ�Ǹ�ͼƬ������
	SetWorkingImage(&img);
	int k = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			//ȡ����i�е�j�е�����ֵ
			data[k++] = getpixel(j, i);//x���꣬y����

		}
	}

	SetWorkingImage(&img);//�ѹ�������ԭĬ��ֵ

	//��ʼƴ��
	IMAGE imgDest;
	//������ͼƬ�Ĵ�С
	imgDest.Resize(width * 12, height * 12);

	//IMAGE imgDest;
	SetWorkingImage(&imgDest);	
	//��������
	setFont();

	//��ԭʼ��Ƭ�����ؽ���ɨ��
	int index = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			//׼��д����
			//��ȡ����ɫ
			int color = data[i * width + j];
			settextcolor(color);
			//д����
			int x = j * 12;
			int y = i * 12;
			outtextxy(x,y,arry[index]);//Ĭ���ڵ�ǰ���ڻ�����
			index = (index + 1) % count;
		}
		printf("����� %%%d\n", (i + 1) * 100 / height);
	}
	SetWorkingImage();
	//��ƴ�õ�ͼƬ������
	//1.����
	//2.ʹ�õ����Դ���ͼƬ�鿴���鿴
	saveimage("d://ͼƬ.jpg", &imgDest);//����ͼƬ
	system("rundll32.exe c:\\windows\\system32\\shimgvw.dll,ImageView_Fullscreen d:\\ͼƬ.jpg");

	return 0;
}





////�Ľ���
////�ļ�ѡ�񹤾�
//
//#include <windows.h>
//#include <Commdlg.h>
//#include <stdio.h>
//#include <graphics.h>
//
//
//void setFont() {
//    LOGFONT f;
//    gettextstyle(&f);                   // ��ȡ��ǰ��������
//    f.lfHeight = 12;                    // ��������߶�Ϊ 48
//    f.lfWidth = 0;
//    _tcscpy_s(f.lfFaceName, "����");    // ��������Ϊ�����塱(�߰汾 VC �Ƽ�ʹ��_tcscpy_s ����)
//    f.lfQuality = ANTIALIASED_QUALITY;  // �������Ч��Ϊ�����
//    settextstyle(&f);                   // ��������
//}
//
//
//void test(const char* fileName, const char* str)
//{
//    initgraph(80, 40);
//    IMAGE img;
//    loadimage(&img, fileName);
//    int width = img.getwidth();
//    int height = img.getheight();
//    int index = 0;
//    int count = strlen(str) / 2;
//    char** data = (char**)malloc(sizeof(char*) * count);
//    for (int i = 0; i < count; i++)
//    {
//        data[i] = (char*)malloc(sizeof(char) * 3);
//        strncpy(data[i], &str[i * 2], 2);
//        data[i][2] = 0;
//    }
//
//    SetWorkingImage(&img);
//
//
//    int* pix = (int*)malloc(sizeof(int) * width * height);
//    if (pix == NULL) return;
//    int k = 0;
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            pix[k++] = getpixel(j, i);
//        }
//        printf("����� %%%d\n", (i + 1) * 100 / height);//
//    }
//    SetWorkingImage();
//
//    IMAGE imgDest;
//    imgDest.Resize(width * 12, height * 12);
//    SetWorkingImage(&imgDest);
//    //setbkcolor(RED);
//    //cleardevice();
//    setFont();
//    for (int i = 0; i < height; i++)
//    {
//        for (int j = 0; j < width; j++)
//        {
//            int x = j * 12;
//            int y = i * 12;
//            int tmp = pix[i * width + j];
//            settextcolor(tmp);
//            outtextxy(x, y, data[index]);
//            index = (index + 1) % count;
//        }
//    }
//    SetWorkingImage();
//
//    saveimage("d1.jpg", &imgDest);
//
//    //system("mspaint.exe d1.jpg");//��ͼ���չʾ
//    system("rundll32.exe c:\\windows\\system32\\shimgvw.dll,ImageView_Fullscreen d:\\ͼƬ.jpg");//ϵͳ�Դ�ͼƬ�鿴��
//}
//
//
//bool selectFile(char retName[]) {
//    OPENFILENAME ofn;
//    char szFile[100];
//    ZeroMemory(&ofn, sizeof(ofn));
//    ofn.lStructSize = sizeof(ofn);
//    ofn.hwndOwner = NULL;
//    ofn.lpstrFile = szFile;
//    ofn.lpstrFile[0] = '\0';
//    ofn.nMaxFile = sizeof(szFile);
//    ofn.lpstrFilter = "All\0*.*\0Text\0*.TXT\0";
//    ofn.nFilterIndex = 1;
//    ofn.lpstrFileTitle = NULL;
//    ofn.nMaxFileTitle = 0;
//    ofn.lpstrInitialDir = NULL;
//    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
//    if (GetOpenFileName(&ofn)) {
//        strcpy(retName, szFile);
//        return true;
//    }
//    return false;
//}
//
//
//int main(void) {
//    char str[256] = "";
//    printf("������ҪǶ������");
//    scanf_s("%s", str, sizeof(str));
//    printf("��ѡ��Ҫʹ��ͼƬ: ");
//    getchar();
//    char fileName[256];
//    selectFile(fileName);
//    test(fileName, str);
//
//    system("pause");
//    return 0;
//}
//
