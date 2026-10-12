#include <stdio.h>
int main()
{
	int n;
	printf("请输入你想计算的阶乘值：");
	scanf("%d",&n);
	int i=1;
	int fact=1;
	for(i=1;i<=n;i++) {
		fact*=i;
	}
	printf("n!=%d",fact);
	return 0;
}
