#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)//row
	{
		for(j=1;j<=5;j++)//colum
		{
		printf("%d  ",i);
		}
		printf("\n");
	}


	getch();
}