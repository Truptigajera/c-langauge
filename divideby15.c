#include<stdio.h>
int small()
{
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	if(a%15==0)
	printf("divisible by 15 is:%d",a);
	else
	printf("divisible is not by 15 is:%d",a);	
}
	int main()
	{
	small();
	}