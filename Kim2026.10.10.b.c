#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	printf("请输入你想要求的底数及其指数：");
	scanf("%d %d",&a,&b) ;
	
    double q=pow(a,b);
    printf("最终数值为：%.1f",q);
    return 0;
}
