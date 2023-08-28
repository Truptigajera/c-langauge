#include<stdio.h>
int small()
{
	int a,b;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
	if(a<b)
	printf("smallest is:%d",a);
	else
	printf("smallest is:%d",b);	
}
	int main()
	{
	small();
	}