#include <stdio.h>
void main(){
    int x=10;
    
    int *iptr=&x;
    void *vptr=&x;

    printf("%p\n",iptr);
    printf("%p\n",vptr);

    printf("%d\n",*iptr);
   /*printf("%d",*vptr);
   c.c:12:17: warning: dereferencing 'void *' pointer
   12 |     printf("%p",*vptr);
      |                 ^~~~~
c.c:12:17: error: invalid use of void expression*/ 


}

// 0000001b68bff68c
// 0000001b68bff68c
// 10