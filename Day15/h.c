#include <stdio.h>
void main(){
        int arr[5];

        printf("Enter array elements:\n");

        for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
        
        }

        printf("Array elements are:\n");
        for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
        
        }
}

//With for loop 