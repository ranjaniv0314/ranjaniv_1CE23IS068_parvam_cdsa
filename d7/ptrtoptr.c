#include<stdio.h>
void main(){
    int t=700;
    int *p=&t;
    int **pptr=&p;
    printf("%d\t%d\t%d\n",t,*p,**pptr);
    (**pptr)++;
    printf("%d\t%d\t%d\n",t,*p,**pptr);
    printf("%x\t%x\n",p,&t);
    printf("%x\t%x\n",&p,pptr);
    pptr=NULL;//delink p from t
    printf("-------------\n");
    printf("%d\n",t);
    printf("*p=%d\n",*p);
    printf("**pptr=%d\n",**pptr);
}