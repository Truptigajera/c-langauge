#include<stdio.h>
#include<conio.h>
void main()
{
	int mark;
	clrscr();
	printf("enter mark:");
	scanf("%d",&mark);

	if(mark>=40)
	{
	printf("pass:");
	}
	else
	{
	printf("fail:");
	}
	getch();
}