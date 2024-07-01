#include<stdio.h>
void main(){
    char carr1[]={'A','B','C'};
    char carr2[]={'D','E','F'};

    char *ptr1=&carr1[1];
    char *ptr2=carr1;
    char (*ptr3)[3]=&carr1;

    printf("%c\n",**ptr3);
    ptr3++;
    printf("%c\n",**ptr3);


}
/*
A
D
B
C
*/