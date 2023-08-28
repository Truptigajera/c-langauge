#include<stdio.h>
#include<conio.h>
void main()
{
	int X,Y;
	clrscr();
	printf("enter X,Y:");
	scanf("%d%d",&X,&Y);

	if(X<=2000 || X>=3000)
	{
	printf("X:");
	}
	if(Y>100 && Y<500)
	{
	printf("Y:");
	}
	getch();
}