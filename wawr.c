#include<stdio.h>
int product(int a,int b)
{
	int t;
	t=a*b;
	return t;

}	
	int main()
{
	//product(2,6);
	int x,y,p;
	printf("Enter x,y:");
	scanf("%d%d",&x,&y);
	p=product(x,y);
	printf("product a and b is:%d",p);
}