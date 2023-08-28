#include<stdio.h>
#include<conio.h>
int main()
{
int dollar,rupees,c;
clrscr();
printf("enter dollar:");
scanf("%d",&dollar);
/*printf("enter rupees:");
scanf("%d",&rupees); */
rupees=dollar*80;
printf("product is:%d",rupees);
getch();
}