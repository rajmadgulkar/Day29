#include<stdio.h>
void main(){
        int size;
        printf("Enter array size:");
        scanf("%d",&size);

        int arr[size];

        printf("Enter array elements:\n");
        for(int i=0; i<size; i++){
                scanf("%d",&arr[i]);
        }
        int flag=0;
        

        for(int i=0; i<size; i++){
                if(arr[i]%4==0&&arr[i]%5==0){
                        flag=1;
                }
        }
        printf("%d\n",flag);

        if (flag==1){
            printf("Element found\n");
        }else{
            printf("Element not found\n");
        }
        

}