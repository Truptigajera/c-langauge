#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x;
	clrscr();
	printf("enter a,b:");
	scanf("%d%d",&a,&b);
	x=a;
	a=b;
	b=x;
       //	printf("a\tb");
	printf("swapping with third     a\tb");
	printf("\n\t\t\t%d\t%d",a,b);
	getch();
}