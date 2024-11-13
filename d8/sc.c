#include<stdio.h>
int main() {
    int day=2;
    switch(day)
    {
        case 1: printf("Monday");
        break;
        case 2:printf("Tuesday");
        break;
        case 3:printf("wednesday");
        break;
        case 4:printf("thursday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("satursday");
        break;
        case 7:printf("sunday");
        break;
        default:printf("Inalid input");
    }
    return 0;
}