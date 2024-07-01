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
            sum=sum+arr[i][j];

        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("%d\n",arr[i][j]);
        }
    }
    printf("\n");
    printf("The sum of elements in 2D array is %d",sum);

}
/*
Enter Rows:2
Enter Columns:3
Enter elements:1
2
3
4
5
6
1
2
3
4
5
6

The sum of elements in 2D array is 21
*/