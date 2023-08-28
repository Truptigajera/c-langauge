#include<stdio.h>
#include<conio.h>
void main()           //0.5-1-2.5-5-8.5
{
	int i,a=0.5,b,c,n;
	clrscr();
	printf("n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
	}
	getch();
}
