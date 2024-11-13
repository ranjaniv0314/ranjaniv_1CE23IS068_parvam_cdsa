#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void main(){
    int arr[]={5,7,2,8,4,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int X=2;
    bool b=false;
    for(int i=0;i<n;i++){
        if(X==arr[i]){
            b=true;

        }
    }if(b){
        printf("yes");
    }else{
        printf("no");
    }
}