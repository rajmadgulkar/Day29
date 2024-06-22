#include<stdio.h>
void main(){
 
    int arr[]={10,20,30,40};
    
    int *ptr=&arr[1];

    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+2));


}

// 20
// 40