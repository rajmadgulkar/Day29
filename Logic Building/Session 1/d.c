#include<stdio.h>
void main(){
    int x=1;
    int rows;
    int cols;
    printf("Rows:");
    scanf("%d",&rows);
    printf("Col:");
    scanf("%d",&cols);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            printf(" %d",x);
            x++;
        }
        printf("\n");
    }
}
/*
Rows:3
Col:4
 1 2 3 4
 5 6 7 8
 9 10 11 12
 */