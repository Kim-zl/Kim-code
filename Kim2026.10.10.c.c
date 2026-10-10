#include <stdio.h>
int main()
{
	const int pass=60;
	int score;
	
	printf("请输入你的成绩：");
	scanf("%d",&score) ;
	if (score>=pass){
		printf("恭喜你！这个成绩合格了！");
	}else{
		printf("很遗憾！这个成绩并未合格。再接再厉！"); 
	}
	return 0;
}
