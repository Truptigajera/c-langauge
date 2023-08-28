#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter a:");
scanf("%d",&a);
if(a%5==0)
{
printf("divisible by 5:%d",a);
}
else
{
printf("not divisible by 5:%d",a);
}
getch();
}