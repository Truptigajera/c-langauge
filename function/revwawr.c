#include<stdio.h>
int revers(int n)
{
int t=0;
while(n>0)
	{
	t=t*10 + n%10;
	
	n/=10;
	}
	return t;
}
	int main()
{
	int num,r;
	printf("enter number:");
	scanf("%d",&num);

	r=revers(num);
	printf("The revers number is:%d",r);
}