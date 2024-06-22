#include<stdio.h>
void main(){

    int x=10;
    //Wild pointer
    int *ptr=NULL;
    printf("%d\n",*ptr);
}
//No output b'coz the address has zero value so dereferencing it is meaningless.