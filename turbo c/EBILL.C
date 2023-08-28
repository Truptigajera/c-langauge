#include<stdio.h>
#include<conio.h>
int main()
{
float mc,u,p,c;
clrscr();
printf("enter u,p,c:");
scanf("%f%f%f", &u,&p,&c);
mc=u*p+c;
printf("ans:%f",mc);
getch();
}