#include<stdio.h>
void main(){
    int x=5;
    int *ptr=&x;
    

    printf("%p\n",ptr);
    printf("%p\n",*ptr);
}
// Use of Dereferencing operator