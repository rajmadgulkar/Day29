#include <stdio.h>
void main(){

    int x=10;
    int y=20;

    int *ptr=&x;
   
    printf("%d\n", *ptr);

    printf("%d\n",*(ptr+1));
}

// 10
// 20