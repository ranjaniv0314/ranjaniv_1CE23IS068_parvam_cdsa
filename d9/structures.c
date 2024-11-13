#include<stdio.h>
struct student{
    int rollNo; char name[50];int semesterNumber;
    float fees;char course[50];
};
struct student s;
void main(){
    printf("%d\n",s.rollNo);
    printf("%f\n",s.fees);
    s.rollNo=1001; s.fees=52000;
     printf("%d\n",s.rollNo);
    printf("%f\n",s.fees);

    }