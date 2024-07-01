#include<stdio.h>
void main(){
    int arr1[]={10,20,30,40,50};
    int arr2[]={60,70,80,90,100};

    int *ptr = arr1;
    int *ptr1 = &(arr1[0]);

    printf("%d\n",*ptr);
    printf("%d\n",*ptr1);
}
/*
10
10
*/