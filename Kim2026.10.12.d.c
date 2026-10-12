#include <stdio.h>
int main()
{
	int x;
	printf("输入你想求证的数：");
	scanf("%d",&x) ;
	int i=2;
	int m=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			m=0;
			break;
		}
	}
	if(m!=0){
		printf("%d是素数。",x);
	}else{
		printf("%d不是素数。",x);
	}
	return 0;
}
