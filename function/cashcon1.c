#include<stdio.h> // not clear ouput show
void con(int);
void main()
{
	int a;
	printf("Enter an amount:");
	scanf("%d",&a);
	con(a);
}
	void con(int a)
	{
	int x,i,n[]={2000,500,200,100,50,20,10,5};
	for(i=0;i<8;i++)
	{
	if(a>=n[i])
		{x=a/n[i];
		a=a-x*n[i];
		printf("%d amt of note:%d",n[i],x);}
	}
	}