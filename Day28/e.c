#include<stdio.h>
void funarr(int* ptr[5]){
    printf("%p\n",ptr);

}


void main(){

    int arr1[5]={10,20,30,40,50};

    funarr(&arr1);
    funarr(arr1);
    funarr(&arr1[2]);
    

}
// 00000035421ff7d0
// 00000035421ff7d0
// 00000035421ff7d8