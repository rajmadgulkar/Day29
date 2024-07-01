#include<stdio.h>
void main(){
    int rows;
    int cols;
    int sum=0;
    printf("Enter Rows:");
    scanf("%d",&rows);
    printf("Enter Columns:");
    scanf("%d",&cols);

    int arr[rows][cols];
    printf("Enter elements:");
    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
            

        }
    }
    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            
            if(i==j){
                sum=sum+arr[i][j];
                printf("%d\n",arr[i][j]);
            }

        }
    }
    printf("\n");
    printf("The sum of diagonal elements in 2D array is %d",sum);

}
/*
Enter Rows:3
Enter Columns:3
Enter elements:1
2
3
4
5
6
7
8
9
1
5
9

The sum of diagonal elements in 2D array is 15
*/