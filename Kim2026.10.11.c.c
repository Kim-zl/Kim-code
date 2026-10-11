#include <stdio.h>
int main()
{
	int x;
	int n=0;
	printf("请输入你的数值：");
	scanf("%d",&x) ;
	n++;
	x/=10;
	while(x>0){
		n++;
		x/=10;
	}
	printf("它是%d位数。\n",n);
	return 0;
}
