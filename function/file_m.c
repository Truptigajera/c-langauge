/*
    r-open a text file to read mode
    w-open a text file to write mode
    a-open a text file to append mode
*/
#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("abc.txt","w+");
    //fp = fopen("D:/tkg/function/data structure/abc.txt","w+");
    fprintf(fp,"welcome to skill qode, decode your skill hear..\n");
    fputs("you entring learing c now..\n",fp);
    fputs("we are enjoying every thing..\n",fp);
    fclose(fp);
}