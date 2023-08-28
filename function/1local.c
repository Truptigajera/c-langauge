#include<stdio.h>
void dis(int m,int s,int e,int total,float per)
{
	printf("maths marks:%d\n",m);
	printf("science marks:%d\n",s);
	printf("english marks:%d\n",e);
	printf("total marks:%d\n",total);
	printf("percentage:%.2f\n",per);
	
}
void calc(int m,int s,int e)
{
	int total;
	float per;
	total=m+s+e;
	per=(float)total/3;
	dis(m,s,e,total,per);
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
calc(m,s,e);
}
	int main()
	{
	setdata();
	}
