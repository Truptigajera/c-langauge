#include<stdio.h>
void main()
{
	int amt,a, rev=0;
	printf("Enter amt:");
	scanf("%d",&amt);
	while(amt!=0)
	{
	a=amt%10;
	rev=rev*10+a;
	amt/=10;
	}
	printf("reverse number:%d",rev);
}