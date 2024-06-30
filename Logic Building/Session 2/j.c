#include<stdio.h>
void main(){
    int rows;
    int num=1;

    printf("ROWS:");
    scanf("%d",&rows);

    for (int i=1; i<=rows;i++){
        for (int j=1; j<=rows;j++){
            printf(" %d",num);
            num=num+2;


        }
        num=num-2;
        printf("\n");
    }
}

/*
ROWS:3
 1 3 5
 5 7 9
 9 11 13
 */