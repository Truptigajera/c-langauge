#include<stdio.h>
void main()
{
	char str[20];
	int i,j;
	printf("enter string:");
	gets(str);

	i=0;
	while(str[j]!='\0')
	{
		j++;
	}
	i=j-1;
	while(i>=0)
	{
	printf("%c",str[i]);
	i--;
	}
}