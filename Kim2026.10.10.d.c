#include <stdio.h>
int main()
{
	const int ready=20;
	int code;
	int count;
	printf("请分别输入code和count:");
	scanf("%d %d",&code,&count) ;
	if (code==ready){
		if(count>20)
		printf("一切正常\n");
	else printf("count<=20,数值错误\n");
	}else{
		printf("数值错误\n");
	}
	return 0;
}
