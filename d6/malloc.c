#include<stdlib.h>
#include<stdio.h>
int main(){
    //malloc=3 4 5 6 7
    //calloc=2 4 6 8 
    int *arr=(int*) malloc (a*sizeof(int));
    arr[2]=20;
    arr[0]=200;
   printf("%d\n",arr[0]);
}