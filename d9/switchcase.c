#include<stdio.h>
void main(){
    int n=53;
    switch(n%2){
        case 0:
        printf("%d is an even number",n);
        break;
        case 1:
        printf("%d is an odd number",n);
    }
}