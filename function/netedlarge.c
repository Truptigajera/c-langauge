#include<stdio.h>
int large()
{
	int a,b,c;
	printf("Enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c)
		printf("a:");
		else
		("c:");}
	else{
		if(b>c)
		printf("b:");
		else
		printf("c:");}
}
	int main()
	{
	large();
	}