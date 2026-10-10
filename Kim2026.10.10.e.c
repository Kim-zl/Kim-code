#include <stdio.h>
int main()
{
	int x;
	printf("输入你的数值x=");
	scanf("%d",&x);
	if (x<0){
		printf("f=-1");
	}else if(x==0){
		printf("f=0");
	}else {
		printf("f=%d",x*2);
	}
	return 0;
}
