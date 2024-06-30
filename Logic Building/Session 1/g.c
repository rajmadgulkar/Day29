#include<stdio.h>
void main(){
    int rows;
    printf("ROWS:");
    scanf("%d",&rows);
    for (int i=rows;i>=1;i--){
        for (int j=1;j<=rows;j++){
            printf(" %d",i);
        }
        printf("\n");
    }
}
/*
ROWS:4
 4 4 4 4
 3 3 3 3
 2 2 2 2
 1 1 1 1
 */