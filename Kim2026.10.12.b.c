#include <stdio.h>
int main()
{
	int n;
	printf("请输入你想计算的值：");
	scanf("%d",&n) ;
	
	int i=1;
	int fact=1;
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("%d",fact) ;
	return 0;
}
