#include <stdio.h>
int main()
{
	int price=0;
	int bill=0;
	
	printf("请输入金额：");
	scanf("%d",&price);
	printf("请输入票面：") ;
	scanf("%d",&bill) ;
	
	if (bill>=price){
		printf("应找您%d元。",bill-price);
	}else{
		printf("钱不够哦！");
	}
	return 0;
}
