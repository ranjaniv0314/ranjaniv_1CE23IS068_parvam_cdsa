#include<stdio.h>
void main(){
    char name[]={'c','i','t','y','c','o','l','l','e','g','e','\0'};
    vowels[]=('a','e','i','o','u');
   
   
    printf("%s\n",name);
    printf("%c\n",name[1]);
    printf("%c\n",name[3]);
    for(int i=0;i<4;i++){
        printf("%c\t\t",name[i]);
    }
    puts("\n\n");
    for(int j=0;name[j]==('a'||'e'||'i'||'o'||'u');j++);{
    printf("%c\t\t",name[j]);
    }
    printf("%d count of the vowel:")
}
