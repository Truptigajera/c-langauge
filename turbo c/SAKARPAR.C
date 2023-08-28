#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,sp=5;
	clrscr();
	for(a=1;a<=sp;a++)
	{
		for(b=sp;b>a;b--)
		{
		printf("  ");
		}
		for(c=1;c<=(2*a)-1;c++)
		{
		printf("* ");
		}
		printf("\n");
	}
	for(a=1;a<=sp;a++)
	{
		for(b=1;b<=a;b++)
		{
		printf("  ");
		}
		for(c=1;c<=2*(sp-a)-1;c++)
		{
		printf("* ");
		}
		printf("\n");
	}
	getch();

}