#include <stdio.h>
int main()
{
	int n,m;
	int j,t;
	scanf("%d %d",&n,&m);
	t=(m-2*n)/2;
	j=n-t;
	if ((m-2*n)>=0&&(m-2*n)%2==0&&j>=0&&t>=0){
		printf("%d %d",j,t);
	}else {
		printf("ERROR");
	}
	return 0;
}
