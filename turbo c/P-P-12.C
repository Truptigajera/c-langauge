#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,a=65;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(j%2==0)
		{printf("%c ",a);}
		else{printf("%c ",a+32);}
		a++;
		}
		printf("\n");
	}
	getch();
}