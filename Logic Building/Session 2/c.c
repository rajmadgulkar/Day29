#include<stdio.h>
void main(){
    int rows;
    int num=1;

    printf("ROWS:");
    scanf("%d",&rows);

    for (int i=1; i<=rows;i++){
        for (int j=1; j<=rows;j++){
            printf(" %d",num);
            num=num+3;


        }
        printf("\n");
    }
}
/*
ROWS:3
 1 4 7
 10 13 16
 19 22 25
 */