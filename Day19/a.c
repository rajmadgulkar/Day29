#include <stdio.h>
void main(){
    int arr[]={10,20,30,40,50};

    int *ptr1=&arr[0];
    int *ptr2=&arr[2];

    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);


    printf("%ld\n",ptr2-ptr1);
    printf("%ld\n",ptr1-ptr2);



}
// 10
// 30
// 2
// -2