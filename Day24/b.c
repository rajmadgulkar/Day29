#include<stdio.h>
void main(){
    int arr[2][3];
    printf("Enter elements:");
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("%p\n",arr[i][j]);
        }
    }
}
/*
Enter elements:1
2
3
4
5
6
0000000000000001
0000000000000002
0000000000000003
0000000000000004
0000000000000005
0000000000000006
*/