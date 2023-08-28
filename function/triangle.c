#include<stdio.h>
float triangle()
{
	float b,h,t;
	printf("enter b and h:");
	scanf("%f%f",&b,&h);
	t=(b*h)/2;
	return t;
}
	float main()
	{
	float x;
	x=triangle();
	printf("traingle area is:%f",x);
	}