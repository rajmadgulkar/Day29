#include<stdio.h>
void main(){
    char x='a';
    char y='b';

    char *ptr1=&x;
    char *ptr2=&y;

    printf("%d\n",*ptr1+*ptr2);
    printf("%c\n",*ptr1+*ptr2);
}