#include<stdio.h>
void main(){
    int arr[2][2][3]={{1,2,3,4,5,6},7,8,9,10,11,12};
    printf("Array Elements are:");
    for(int i=0;i<2;i++){
        printf("plane: %d\n",i);
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d\n",arr[i][j][k]);
            }
        }
        printf("\n");
    }
}
/*
Array Elements are:plane: 0
1
2
3
4
5
6

plane: 1
7
8
9
10
11
12
*/