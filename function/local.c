#include<stdio.h>
void result(int total,float per)
{
	 printf("\nTotal:%d",total);
	printf("\npercentage:%d",per);
	
}
	void calc(int m,int s, int e,int total,float per)
	{

	total=m+s+e;
	per=(float)total/3;
	
	}
void setdata()
{
int m,s,e;
printf("enter maths marks:");
scanf("%d",&m);
printf("enter science marks:");
scanf("%d",&s);	
printf("enter english marks:");
scanf("%d",&e);
calc(); 
 result();
}	
	int main()
	{
	setdata();
	}
