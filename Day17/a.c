#include<stdio.h>
void main(){
    int x=5;

    printf("%d\n",x);
    printf("%d\n",&x);//Warning //half address
    printf("%p\n",&x);//full address
    }