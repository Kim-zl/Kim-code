#include <stdio.h>
int main()
{
	int g;
	char f;
	printf("ÇëÊäÈëÄãµÄ³É¼¨£º");
	scanf("%d",&g) ;
	
	switch (g/10){
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("E");
			break;
	}
	return 0;
}
