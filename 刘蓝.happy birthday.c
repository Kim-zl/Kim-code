#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//光标移动
void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//设置文字颜色，0xE代表亮黄色
void setYellow()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE);
}

int main()
{
    
    system("color 00");
    int i,j;
    srand((unsigned)time(NULL));

    setYellow();
    gotoxy(30,5);
    printf("★ ★ ★  HAPPY BIRTHDAY ★ ★ ★");
    Sleep(800);

    for(j=0;j<20;j++)
    {
        int x = rand()%60 + 5;
        int y = rand()%10 + 8;
        gotoxy(x,y);
        printf("*");
        Sleep(120);
    }
    gotoxy(28,18);
    printf("愿你如这些星星一样闪闪发光！");
    gotoxy(0,22);
    system("pause");
    
    
	char name[20];
	printf("\n\n是哪位小甜心要过生日啦？：");
	scanf("%s",&name);
	printf("\n\nYes!You're right!  是%s要过生日啦！\n    让我们一起对她说：\n    Happy Birthday!\n",name);
	
	
    printf("\n\n\n是哪位小朋友可以得到生日惊喜呢？：\n");
    scanf("%s", name);

    printf("\n加载生日惊喜中...\n");
    Sleep(800);
    system("cls"); //清屏
    
	printf("        HAPPY BIRTHDAY  \n");
    printf("\n");
    printf("亲爱的%s：\n",name);
    printf("    祝你生日快乐！\n");
    printf("    花会沿路盛开，以后的路也是。\n    乘欢愉，向远方做最好的自己。\n    Happy everyday!!\n");
    printf("\n\n");
    
    
	return 0;
}
