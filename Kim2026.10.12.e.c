#include <stdio.h>
int main()
{
	int x;
	for(x=2;x<=100;x++){
		int i;
		int m=1;
		for (i=2;i<x;i++){
			if(x%i==0){
				m=0;
				break;
			}
    	}
    	if(m!=0){
			printf("%d ",x);
		}
	}
	printf("\n");
	return 0;
}
