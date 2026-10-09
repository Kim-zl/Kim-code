#include <stdio.h>
int main()
{
	int cm;
	printf("请输入厘米数：");
	scanf("%d",&cm) ;
	double total_foot=cm/100.0/0.3048;
	int foot=(int)total_foot;
	int inch=(int)((total_foot-foot)*12);
	printf("英尺和英寸数分别是：%d %d",foot,inch);
	return 0;
}
