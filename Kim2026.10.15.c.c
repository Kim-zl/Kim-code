#include <stdio.h>
int main()
{
	int all;
	scanf("%d",&all);
	int yns=all-3500;
	if (yns<=0){
		printf("0.00");
	}else if(yns>0&&yns<=1500){
		printf("%.2f",(yns*0.03-0)*1.0);
	}else if(yns>1500&&yns<=4500){
		printf("%.2f",yns*0.1-105);
	}else if(yns>4500&&yns<=9000){
		printf("%.2f",yns*0.2-555);
	}else if(yns>9000&&yns<=35000) {
		printf("%.2f",yns*0.25-1005);
	}
	return 0;
}
