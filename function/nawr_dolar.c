#include<stdio.h>
int dollar()
{
	int dollar,rupees;
	printf("enter dollar:");
	scanf("%d",&dollar);
	rupees=dollar*80;
	return rupees;
}
	int main()
	{
	int x;
	x=dollar();
	printf("dollar convert into rupees:%d\n\n",x);
	}