#include<stdio.h>
void main(){
    int size;
    printf("Enter Array size:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter array elements:\n");
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(int i=0; i<size;i++){
        printf("%d\n",arr[i]);
        //printf("%d\n",*(arr+i)); Same
    }
}
/*
Enter Array size:3
Enter array elements:
1
2
3
Array elements are:
1
1
2
2
3
3
*/