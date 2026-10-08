#include <stdio.h>
int main()
{
	int a,b;
	printf("分别输入你想求其平均值的两个整数：");
	scanf("%d %d",&a,&b);
	
	double c=(a+b)/2.0;
	printf("%d和%d的平均值=%.1f\n",a,b,c);
	
	return 0;
}
