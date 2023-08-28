#include<stdio.h>
void vote()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18)
	printf("you can votting.");
	else
	printf("you can not.");
}
	int main()
	{
	printf("hi\n");
	vote();
	printf("\nhi\n");
	vote();
	}