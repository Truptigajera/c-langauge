#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,n=5;
	clrscr();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(j==1 || j==n || i==1 || i==n)
		printf("* ");
		else
			printf("  ");
		}
		printf("\n");
	}
	getch();
}