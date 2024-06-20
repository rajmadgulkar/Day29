#include<stdio.h>
void main(){
    int a=5;
    float b=87.24;
    double x=45.02145545;
    char y='A';

    int *ptr1=&a;
    // float *ptr2=b;
    double *ptr3=&x;
    char *ptr4=&y;

    printf("%p\n",ptr1);
    // printf("%p\n",ptr2);
    printf("%p\n",ptr3);
    printf("%p\n",ptr4);


    printf("%d\n",*ptr1);
    // printf("%f\n",*ptr2); error: incompatible types when initializing type 'float *' using type 'float'
    printf("%lf\n",*ptr3);
    printf("%c\n",*ptr4);

}

// 0000008b48dffb0c
// 0000008b48dffb00
// 0000008b48dffaff
// 5
// 45.021455
// A