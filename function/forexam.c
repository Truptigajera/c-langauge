#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string:");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        for(j=0;j<=i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }    
}