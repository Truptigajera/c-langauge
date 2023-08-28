#include<stdio.h>
int product(int a,int b)
{
	int t;
	t=a*b;
	printf("product a and b is:%d",t);
}	
	int main()
{
	//product(2,6);
	int x,y,;
	printf("Enter x,y:");
	scanf("%d%d",&x,&y);
	product(x,y);
	
}