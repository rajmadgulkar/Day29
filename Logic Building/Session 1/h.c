#include<stdio.h>
void main(){
    int rows;
    int num;

    printf("ROWS:");
    scanf("%d",&rows);

    num=rows*rows;

    for (int i=rows; i>=1;i--){
        for(int j=1; j<=rows;j++){
            printf(" %d",num);
            num--;


        }
        printf("\n");
    }
}

/*
ROWS:3
 9 8 7
 6 5 4
 3 2 1
 */