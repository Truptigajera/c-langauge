#include<stdio.h>
#include<conio.h>
int main()
{
int inches,cm;
clrscr();
printf("enter inches:");
scanf("%d",&inches),
cm=inches*2.54;
printf("product is:%d",cm);
getch();
}