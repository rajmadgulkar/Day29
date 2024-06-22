#include <stdio.h>
void main(){
    int x=10;
    int y=20;


    printf("%p\n",&x);
    printf("%p\n",&y);

    int *ptr1=&x;
    int *ptr2=&y;

    printf("%d\n",*ptr1+*ptr2);
    //printf("%d",ptr1+ptr2);

}
// error: invalid operands to binary + (have 'int *' and 'int *')
//    14 |     printf("%d",ptr1+ptr2);
// 0x7fff7b76a4f0
// 0x7fff7b76a4f4
// 30