#include<stdio.h>
void main(){
    int x=5;
    int *ptr1=&x;
    int *ptr2=x;

    printf("%p\n",ptr1);
    printf("%p\n",ptr2);
}
// d.c:5:15: warning: initialization of 'int *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
//     5 |     int *ptr2=x;
//       |               ^
// 0000007e33bff78c
// 0000000000000005