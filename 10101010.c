#include<stdio.h>
void main()
{
	int i=1, a=1;
	do
	{
	int j=1;
	while(j<=i)
	{if(a%2==0)
	printf("0");
	else
	printf("1");
	a++;
	j++;
	}
	printf("\n");
	i++;
	}
	while(i<=5);
}