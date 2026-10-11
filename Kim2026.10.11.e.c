#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0)) ;
	int number=rand()%100+1;
	int count=1;
	int a=0;
	printf("我已经想好了1-100之间的数了。");
	do{
	  printf("请猜这个1-100的数：");
	  scanf("%d",&a) ;
	  count++;
	  if(a<number){
	  	printf("你猜的数小了。");}
	  else if(a>number){
	  	printf("你猜的数大了。"); }
	}while (a!=number);
	printf("恭喜你！用了%d次猜出了我想的数字。\n",count);
	return 0;
}
