#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("enter a:");
scanf("%d",&a);
if(a%4==0){
printf("year is leap year:%d",a);
}
else{
printf("year is not leap year:%d",a);
}
getch();
}