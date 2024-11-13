#include<stdio.h>
void main()
{
    int i;
    char ch;
    printf("Enter a character:",ch);
    scanf("%c",&ch);
    if(i==ch)
    {
        int i=ch;
        i+=32;
        ch=i;
        printf("\n\n%c",ch);
    }
    else
   
        printf("invalid input");
    
    
}