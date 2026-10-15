#include <stdio.h>
int main()
{
	double a;
    scanf("%lf",&a);
	if (a<0){
		a=0-a;
		printf("%.2f",a*1.0);
	}else{
		printf("%.2f",a*1.0);
	}
	return 0;
}
