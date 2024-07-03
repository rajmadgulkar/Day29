#include<stdio.h>

    void fun(int x){

        printf("%d\n",x);

    }

    void main(){
        fun('A');
        fun(10);
        fun(20.5f);
        fun(35.50);


}
// 65
// 10
// 20
// 35