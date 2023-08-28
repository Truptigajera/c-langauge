#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
	{
	if(a>c)
	printf("large no is:%d",a);
	else
	printf("large no is:%d",c);
	}
	else if(b>c)
	{
	printf("large no is:%d",b);
	}
	else{printf("large no is:%d",c);}
	getch();


}