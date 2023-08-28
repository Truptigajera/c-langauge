#include<stdio.h>
#include<conio.h>
void main()
{
	float total,per,grade,A,B,C,D,fail,maths,eng,sci;
	clrscr();
	printf("enter maths,eng,sci:");
	scanf("%f%f%f",&maths,&sci,&eng);
	total=maths+sci+eng;
	per=total/300*100;
	printf("percentage is:%f",per);

	if(per>=75)
	{
	printf("A:");
	}
	else if(per>=60)
	{
	printf("B:");
	}
	else if(per>=45)
	{
	printf("C:");
	}
	else if(per>=35)
	{
	printf("D:");
	}
	else if(per<35)
	{
	printf("fail:");
	}
	getch();
}