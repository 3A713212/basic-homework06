#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y; 
	printf("�п�J�~��: ");
	scanf("%d",&y);

	if(y/400==0||(y%4==0&&y%100!=0)) 
	printf("%d�~���|�~\n",y);
	else
	printf("%d�~�����~\n",y);
		
}
