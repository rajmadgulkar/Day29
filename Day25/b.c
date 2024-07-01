#include <stdio.h>
void main(){
    int arr[3][3]={10,20,30,40,50,60,70,80,90};
    printf("%ld\n",sizeof(arr));
    printf("%ld\n",sizeof(arr[1]));
    printf("%ld\n",sizeof(arr[2][1]));
}
/*
36
12
4
*/