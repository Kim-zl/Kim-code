#include <stdio.h>
int main()
{
	int x;
	printf("输入你的数值：");
	scanf("%d",&x) ;
	int n=0;
	do
	{
		x/=10;
		n++;
	}while (x>0);
	printf("%d\n",n);
	return 0;
}
