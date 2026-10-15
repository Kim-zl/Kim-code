#include <stdio.h>
int main()
{
	int y1,m1,d1;
	int y2,m2,d2;
	scanf("%d-%d-%d",&y1,&m1,&d1);
	scanf("%d-%d-%d",&y2,&m2,&d2);
	if (y1>y2){
		printf("No"); 
	}else if(y1>y2){
		printf("Yes");
	}else if(y1==y2){
		if(m1<m2){
			printf("Yes");
		}else if(m1>m2){
			printf("No");
		}else if(m1==m2){
			if (d1<d2){
				printf("Yes");
			}else if(d1>d2){
				printf("No");
			}
		}
	}
	printf("\n");
	return 0;
}
