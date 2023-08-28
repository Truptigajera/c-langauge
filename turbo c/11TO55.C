#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,j;
	clrscr();
	for(i=11;i<=55;i+=10)
	{
		for(j=0;j<=5;j++)
		{

		printf("%d ",i+j);
		}
		printf("\n");
	}
	getch();
}