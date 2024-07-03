#include<stdio.h>
void funarr(int **ptr[]){
    printf("%d\n",**ptr);

}


void main(){

    int x=10;

    int *ptr=&x;
    int **ptr2=&ptr;
    funarr (ptr2);
    funarr (&ptr);

}
// 10
// 10