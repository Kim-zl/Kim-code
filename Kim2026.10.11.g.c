#include <stdio.h>
int main()
{
	int num,g;
	int sum=0;
	printf("请输入你想求的数：");
	scanf("%d",&num) ;
	while (num!=0){
		g=num%10;
		num=num/10;
		sum=sum+g;
	}
	printf("这个数的每个数相加之后的值为%d。",sum);
	return 0;
}
