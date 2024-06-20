#include<stdio.h>
void main(){
        int size;
        printf("Enter array size:");
        scanf("%d",&size);

        int arr1[size];
        int arr2[size];

        printf("Enter array elements:\n");
        for(int i=0; i<size; i++){
                scanf("%d",&arr1[i]);
        }

        for(int i=0; i<size; i++){
            arr2[i]=arr1[i]+100;

        }
        for(int i=0; i<size; i++){
                printf("%d\n",arr2[i]);
        }
}