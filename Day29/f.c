
//Call by address
#include<stdio.h>
void swap(int*, int*);
void main(){
    int x=10;
    int y=20;
    printf("x= %d\n",x);
    printf("y= %d\n",y);

    swap(&x,&y);

    printf("x= %d\n",x);
    printf("y= %d\n",y);   
}
void swap(int *x,int *y){
    
    printf("x= %d\n",*x);
    printf("y= %d\n",*y);
    
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x= %d\n",*x);
    printf("y= %d\n",*y);
}
/*
x= 10
y= 20
x= 10
y= 20
x= 20
y= 10
x= 20
y= 10
*/