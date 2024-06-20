#include<stdio.h>
void main(){
    int arr[5];

    printf("Enter array elements:\n");
    for(int i=0; i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Elements divided by 2 are:\n");

    for(int i=0; i<5;i++){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);

        }
    }
}