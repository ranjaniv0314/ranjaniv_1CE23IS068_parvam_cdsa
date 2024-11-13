#include<stdio.h>
#include<string.h>
void main(){
    char arr[15]={'c','i','t','y',' ','C','o','l','l','e','g','e','\0'};
    int length=strlen(arr);
    printf("total length=%d\n",length);
    char str1[20]="city engineering";
    char str2[10]="college";
    strcat(str1,str2);
    printf("%s",str1);
    }