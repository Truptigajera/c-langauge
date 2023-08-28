//pointer (reference variable)->store to address of another variable as data
#include<stdio.h>
int main()
{
    int a=50,*p,**q;
    p=&a;
    q=&p;
    printf("value of a is:%d\n",a);
    printf("add of a is:%u\n",&a);
    printf("add of a using p is:%d\n",p);
    printf("add of p is:%u\n",&p);
    printf("value of a using p is:%d\n",*p);
    printf("add of p using q is:%d\n",q);
    printf("add of q is:%d\n",&q);
    printf("value of a using q is:%d\n",**q);
}
