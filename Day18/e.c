#include<stdio.h>
void main(){
    char ch1='x';
    char ch2='y';
    char ch3='z';

    char *ptr=&ch1;

    printf("%p\n",ptr);
    printf("%c\n",*ptr);

    printf("%p\n",(ptr+1));
    printf("%c\n",*(ptr+1));

    printf("%p\n",(ptr+2));
    printf("%c\n",*(ptr+2));

}
// 0x7fff33eeb23d
// x
// 0x7fff33eeb23e
// y
// 0x7fff33eeb23f
// z