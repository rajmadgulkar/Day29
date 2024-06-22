#include<stdio.h>
void main(){
    char ch1='x';
    char ch2='y';
    char ch3='z';

    char *ptr=&ch1;

    printf("%p\n",ptr);
    printf("%c\n",*ptr);

    printf("%p\n",(ptr+'A'));
    printf("%c\n",*(ptr+'A'));//Accessing character at unknown address


}

// 0x7fff6944df6d
// x
// 0x7fff6944dfae

