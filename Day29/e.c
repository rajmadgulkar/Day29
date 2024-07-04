// Call by address

#include<stdio.h>

void fun(int*);

void main(){
    int x=10;
    printf("%d\n",x);

    fun(&x);
printf("%d\n",x);



}
void fun( int *ptr){
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    *ptr=50;
    printf("%d\n",*ptr);
}
/*
10
000000a83e1ffc0c
10
50
50
*/