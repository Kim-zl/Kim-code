#include <stdio.h>
int main()
{
	int n=0;
	int sum=0;
	int num;
	double avg;
	printf("请输入你想要求其平均值的数，并在其结尾输入0：") ;
	scanf("%d",&num) ;
	while(num!=0){
		sum=sum+num;
		n++;
		scanf("%d",&num);
	}
	if (n==0){
		printf("你输入了无效数字。");
	}else if(n!=0){
		avg=1.0*sum/n;
		printf("你输入了%d个数字，其平均值=%.2f。",n,avg);
	}
	return 0;
	
}

