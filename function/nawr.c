#include<stdio.h>
int add()
{
	int a,b,t;
	printf("a and b:");
	scanf("%d%d",&a,&b);
	t=a+b;
	return t;
}
	int main()
	{
	int x;
	printf("hi\n");
	x=add();
	printf("addition:%d\n\n",x);
	printf("\nhello\n");
	}