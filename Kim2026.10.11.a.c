#include <stdio.h>
int main()
{
	int grade;
	char f;
	printf("请输入你的成绩：");
	scanf("%d",&grade) ;
	
	if (grade>=90)
	{f='A';}
	else if (grade>=80&&grade<90)
	{f='B';}
	else if(grade>=70&&grade<80)
	{f='C';}
	else if(grade>=60&&grade<70)
	{f='D';}
	else if(grade<60)
	{f='E';}
	printf("你的成绩为：%c\n",f);
	return 0;
	
}
