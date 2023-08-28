#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter Value:");
    scanf("%d",&n);
    hello:
    if(i<=10){
        printf("%d X %d = %d\n",i,n,n*i);
        i++;
        goto hello;
    }

}
