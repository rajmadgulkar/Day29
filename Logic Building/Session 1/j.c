#include<stdio.h>
void main(){
    int rows;
    int x=1;
    printf("ROWS:");
    scanf("%d",&rows);
    for (int i=rows;i>=1;i--){
        for (int j=1;j<=rows;j++){
            printf(" %d",x);
            x=x+2;

        }
        printf("\n");
    }
}
/*
ROWS:3
 1 3 5
 7 9 11
 13 15 17
 */