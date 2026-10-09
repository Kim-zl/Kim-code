#include <stdio.h>
int main() 
{
	int time,add_min;
	scanf("%d %d",&time,&add_min);
	int hour=time/100;
	int min=time%100;
	int new_allmin=hour*60+min+add_min;
	int h=new_allmin/60;
	int m=new_allmin%60;
	printf("%d",h*100+m);
	return 0;
	
	
}
