#include<stdio.h>
void fun(int *x){
    printf("%p\n",x);
    printf("%d\n",*x);

    }
void main(){

    int a=10;
    fun(&a);

}
// 0000000c521ff7bc
// 10