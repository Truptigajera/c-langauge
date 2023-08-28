#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18)
	{
	printf("person is eligible:");
	}
	else
	{
	printf("person is not eligible:");
	}
	getch();
}