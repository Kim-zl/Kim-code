#include <stdio.h>
int main()
{
	int x=2;
	int count=0;
	while(count<50){
		int i;
		int m=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				m=0;
				break;
			}
		}
		if(m==1){
			printf("%d ",x);
			count++;
		}
		x++;
	}
	printf("\n");
	return 0;
}
