#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (0==a%3&&0==a%5&&0==a%7){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
