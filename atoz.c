#include<stdio.h>
void main()
{
	char i='A',n;
	printf("n:");
	scanf("%c",&n);
	do
	{
	printf("%c ",i);
	i++;
	}
	while(i<=n);
}