#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
//	a>b?printf("A is largest"):a>c?printf("A is largest")://printf("c is largest")
  //	b>c?printf("B is largest"):printf("C is largest");

	printf("%d is largest no",(a>b?(a>c?a:c):b>c?b:c));

	getch();
}