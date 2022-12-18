#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<graphics.h>//引用easyx图形库
void setFont()
{
	LOGFONT f;
	gettextstyle(&f);//获取当前的字体
    f.lfHeight = 12;
	
	f.lfWeight = 0;//默认
	strcpy(f.lfFaceName, "黑体");//设置字体名称
	f.lfQuality = ANTIALIASED_QUALITY;//抗锯齿效果
	settextstyle(&f);//设置字体

}
int main()
{
	//创建图形界面
	initgraph(80, 40, 1);
	char str[512];
	printf("请输入你想说的话：");
	scanf("%s", &str);
	//
	int count = strlen(str) / 2;//计算汉字个数
	char**arry=(char**)malloc(sizeof(char*) * count);
	for (int i = 0; i < count; i++)
	{
		arry[i] = (char*)malloc(3);
		strncpy(arry[i], &str[i * 2],2);
		arry[i][2] = '\0';
	}

	//打开一张图片,然后获取每一个像素点
	IMAGE img;
	loadimage(&img, "y.png");
	int height = img.getheight();//图片的高度
	int width = img.getwidth();//图片的宽度
	//使用动态内存分配
	int*data=(int*)malloc(sizeof(int) * height * width);
	if (data == NULL)return -1;

	//设置工作区，取那个图片的像素
	SetWorkingImage(&img);
	int k = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			//取出第i行第j列的像素值
			data[k++] = getpixel(j, i);//x坐标，y坐标

		}
	}

	SetWorkingImage(&img);//把工作区还原默认值

	//开始拼接
	IMAGE imgDest;
	//设置新图片的大小
	imgDest.Resize(width * 12, height * 12);

	//IMAGE imgDest;
	SetWorkingImage(&imgDest);	
	//设置字体
	setFont();

	//对原始照片的像素进行扫描
	int index = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			//准备写汉字
			//先取出颜色
			int color = data[i * width + j];
			settextcolor(color);
			//写汉字
			int x = j * 12;
			int y = i * 12;
			outtextxy(x,y,arry[index]);//默认在当前窗口画汉字
			index = (index + 1) % count;
		}
		printf("已完成 %%%d\n", (i + 1) * 100 / height);
	}
	SetWorkingImage();
	//把拼好的图片画出来
	//1.保存
	//2.使用电脑自带的图片查看器查看
	saveimage("d://图片.jpg", &imgDest);//保存图片
	system("rundll32.exe c:\\windows\\system32\\shimgvw.dll,ImageView_Fullscreen d:\\图片.jpg");

	return 0;
}





////改进版
////文件选择工具
//
//#include <windows.h>
//#include <Commdlg.h>
//#include <stdio.h>
//#include <graphics.h>
//
//
//void setFont() {
//    LOGFONT f;
//    gettextstyle(&f);                   // 获取当前字体设置
//    f.lfHeight = 12;                    // 设置字体高度为 48
//    f.lfWidth = 0;
//    _tcscpy_s(f.lfFaceName, "黑体");    // 设置字体为“黑体”(高版本 VC 推荐使用_tcscpy_s 函数)
//    f.lfQuality = ANTIALIASED_QUALITY;  // 设置输出效果为抗锯齿
//    settextstyle(&f);                   // 设置字体
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
//        printf("已完成 %%%d\n", (i + 1) * 100 / height);//
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
//    //system("mspaint.exe d1.jpg");//画图软件展示
//    system("rundll32.exe c:\\windows\\system32\\shimgvw.dll,ImageView_Fullscreen d:\\图片.jpg");//系统自带图片查看器
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
//    printf("请输入要嵌入的密语：");
//    scanf_s("%s", str, sizeof(str));
//    printf("请选择要使用图片: ");
//    getchar();
//    char fileName[256];
//    selectFile(fileName);
//    test(fileName, str);
//
//    system("pause");
//    return 0;
//}
//
