#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,i;
	clrscr();
	printf("n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==0)
	printf("\t%d",i*i);

	else
	printf("\t%d",i);
	}
	getch();
}