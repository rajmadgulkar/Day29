#include<stdio.h>
void main(){
    char ch='A';
    
    int *iptr=&ch;
    char *cptr=&ch;

    printf("%d\n",*iptr);// garbage value
    printf("%c\n",*cptr);
}

// b.c:5:15: warning: initialization of 'int *' from incompatible pointer type 'char *' [-Wincompatible-pointer-types]
//     5 |     int *iptr=&ch;
//       |               ^
// 2147233601
// A