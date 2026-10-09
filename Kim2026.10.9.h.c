#include <stdio.h>
int main()
{
	const int MINOR=35;
	int age=0;
	printf("请输入你的年龄：");
	scanf("%d",&age) ;
	
	if (age<=MINOR){
		printf("年轻是美好的！");
	}else{
		printf("年龄不决定上限，让我们一起珍惜美好时光！"); 
	}
	return 0;
}
