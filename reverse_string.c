#include<stdio.h>
void main()
{
	char str[20];
	int i;
	printf("enter string:");
	gets(str);

	printf("your string is:%s",str);
	
	//reverse string
	for(i=0;str[i];i++);
	
	printf("string in reverse order:");
	
	for(i=i;i>=0;i--)
	printf("%c",str[i]);
}