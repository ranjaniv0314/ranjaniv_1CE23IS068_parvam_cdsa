#include<stdio.h>
void main()
{
    int a=10,b=20;
    int max=(a>b)?0:(b==0)?1:2;
    printf("%d",max);
}