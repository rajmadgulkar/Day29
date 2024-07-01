#include<stdio.h>
void main(){
    int arr1[]={10,20,30,40,50};
    int arr2[]={60,70,80,90,100};

    int *ptr1 = arr1+1;
    int *ptr2 = &arr1+1;

    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);
}
/*
d.c:7:17: warning: initialization of 'int *' from incompatible pointer type 'int (*)[5]' [-Wincompatible-pointer-types]
    7 |     int *ptr2 = &arr1+1;
      |                 ^
20
505
*/