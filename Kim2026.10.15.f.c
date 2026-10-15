#include <stdio.h>
int main()
{
	int x;
	int one,two,five;
	int exit_flag=0;
	printf("请输入你的总额：");
	scanf ("%d",&x);
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*10;two++){
			for(five=0;five<=x*10;five++){
				if(one+two*2+five*5==x*10){
			    printf("可由%d个一角，%d个两角，%d个五角凑出%d元\n",one,two,five,x);
				 }
		    }
		}
	}
	return 0;
}
