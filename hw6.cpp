#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y; 
	printf("請輸入年份: ");
	scanf("%d",&y);

	if(y/400==0||(y%4==0&&y%100!=0)) 
	printf("%d年為閏年\n",y);
	else
	printf("%d年為平年\n",y);
		
}
