// Array of pointers
#include<stdio.h>
void main(){
    int x=10;
    int y=20;
    int z=30;
    int *arr[3]={&x,&y,&z};

    printf("%ld\n",sizeof(arr));
    printf("%ld\n",sizeof(arr[0]));
    printf("%ld\n",sizeof(arr[1]));
    printf("%ld\n",sizeof(arr[2]));

}
/*
24
8
8
8
*/