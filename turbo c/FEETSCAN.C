#include<stdio.h>
#include<conio.h>
int main()
{
int feet, inch;
clrscr();
printf("enter feet:");
scanf("%d",& feet);
inch=feet*12;
printf("product is %d",inch);
getch();
}