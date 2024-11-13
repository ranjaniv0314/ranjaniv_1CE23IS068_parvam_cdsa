#include<stdio.h>
void main(){
    printf("%c\n",'a');
    char ch='b';
    printf("%c\n",'b');
    ch++;
    printf("%c\n",ch);
    int i=ch;
    i -= 32;
    ch=i;
    printf("%c",ch);
}