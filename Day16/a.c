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

        int search;
        printf("Enter search element:");
        scanf("%d",&search);

        for(int i=0; i<size; i++){
                if(search==arr[i]){
                        printf("Element found\n");
                }else{
                        printf("Element not found\n");
                }
        }
}
/*Enter array size:3
Enter array elements:
1
2
3
Enter search element:2
Element not found
Element found
Element not found*/

// To overcome multiple printf statements we use flag