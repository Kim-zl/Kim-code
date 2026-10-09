#include <stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	int a=s%10;
	int b=s/10%10;
	int c=s/100;
	int final=a*100+b*10+c;
	printf("%d",final);
	return 0;
}
