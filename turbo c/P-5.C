#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=2;i<=10;i+=2)//row
	{
		for(j=2;j<=10;j+=2)//colum
		{
		printf("%d  ",i);
		}
		printf("\n");
	}


	getch();
}