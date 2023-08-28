#include<stdio.h>
void main()
{
	int a[5],i,total=0,sum=0;
	for(i=0;i<5;i++)
	{
	printf("enter a[%d]:",i);
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
	printf("%d\n",a[i]);

	if(i%2==0)
	sum=sum+a[i];
	
	else
	total=total+a[i];

	}
	printf("even total is:%d",sum);
	printf("\nodd total is:%d",total);
	printf("\n All total is:%d",sum+total);
}