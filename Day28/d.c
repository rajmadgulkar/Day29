#include<stdio.h>
void funarr(int* arr){
    printf("%p\n",arr);

}
void main(){
    int arr1[]={10,20,30,40};
    funarr(arr1);

    funarr(&arr1[1]);

}
// 000000b57f5ffd20
// 000000b57f5ffd24