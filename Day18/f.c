#include<stdio.h>
void main(){
    char ch1='x';
    char ch2='y';
    

    char *ptr=&ch1;

    printf("%p\n",ptr);
    printf("%c\n",*ptr);

    //printf("%p\n",(ptr+1.5));//Pointer addition possible only with an integer
    //printf("%c\n",*(ptr+1.5));


}



// f.c: In function ‘main’:
// f.c:12:23: error: invalid operands to binary + (have ‘char *’ and ‘double’)
//    12 |     printf("%p\n",(ptr+1.5));
//       |                       ^
// f.c:13:24: error: invalid operands to binary + (have ‘char *’ and ‘double’)
//    13 |     printf("%c\n",*(ptr+1.5));