#include<stdio.h>
void main(){
    int x=1;
    int rows;
    printf("Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf(" %d",x);
        }
        x++;
        printf("\n");
    }
}
/*
Rows:3
 1 1 1
 2 2 2
 3 3 3
 */