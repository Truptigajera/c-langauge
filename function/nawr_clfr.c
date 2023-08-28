#include<stdio.h>
float frnhit()
{
	float cel,frnhit;
	printf("enter cel:");
	scanf("%f",&cel);
	frnhit=(cel*9)/5+32;
	return frnhit;
	
}
	float main()
	{
	float x;
	x=frnhit();
	printf("cel convert to frnhit is:%f\n\n",x);
	}