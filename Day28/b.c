#include<stdio.h>

    void fun(float x){

        printf("%d\n",x);

    }

    void main(){
        fun('A');
        fun(10);
        fun(20.5f);
        fun(35.50);


}
// 65.000000
// 10.000000
// 20.500000
// 35.500000