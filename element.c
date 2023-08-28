#include<stdio.h>
void main()
{
	int total=0,a[5],i,sum=0;
	for(i=0;i<5;i++)
	{
	printf("enter val a[%d]:",i);
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
	printf("%d\n",a[i]);
		
	if(a[i]%2==0)
	sum=sum+a[i];
	
	else
	total=total+a[i];
	
	}
	printf("even no total is:%d",sum);

	printf("\nodd no total is:%d",total);

	printf("\n All total is:%d",sum+total);

}