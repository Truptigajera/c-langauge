#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
	printf("\t%d",i);
	}
	getch();
}