#include<stdio.h>
void main()
{
	float per[5],total[5],guj[5],eng[5],sci[5],i;
	for(i=0;i<5;i++)
	{
	printf("enter val eng[%f]\nsci[%f]\nguj[%f]:",i,i,i);
	scanf("%f\n%f\n%f",&eng[i],&guj[i],sci[i]);
	}
	printf("\neng\tsci\tguj\ttotal\tper\n");
	for(i=0;i<5;i++)
	{
	total[i]=eng[i]+sci[i]+guj[i];
	per[i]=total[i]/3;
	printf("%f\t%f\t%f\t%f\t%f\n",eng[i],sci[i],guj[i],total[i],per[i]);
	}
}