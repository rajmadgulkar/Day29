#include<stdio.h>
void fun(int);
void main(){
    fun(10);
    fun('A');

}
void fun(int x){
    printf("%d\n",x);

}
// 10
// 65