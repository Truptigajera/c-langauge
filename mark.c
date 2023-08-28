#include<stdio.h>
void main()
{
	int i,total[5],guj[5],eng[5],sci[5];
	float per[5];
	for(i=0;i<5;i++)
	{
	printf("enter val eng[%d]:",i);
	scanf("%d",&eng[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("enter val sci[%d]:",i);
	scanf("%d",&sci[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("enter val guj[%d]:",i);
	scanf("%d",&guj[i]);
	}
	printf("\neng\tsci\tguj\ttotal\tper\tgrade\n");

	for(i=0;i<5;i++)
	{
	total[i]=eng[i]+sci[i]+guj[i];
	per[i]=total[i]/3;
	printf("%d\t%d\t%d\t%d\t%.2f\t",eng[i],sci[i],guj[i],total[i],per[i]);

	if(eng[i]<40 || sci[i]<40 || guj[i]<40)
	printf("fail");
	
	else if(per[i]>=75)
	printf(" A");
		
	else if(per[i]>=60)
	printf("B");
	
	else if(per[i]>=45)
	printf("C");	
	
	printf("\n");	
	}
}