#include<stdio.h>
void main(){
    int rows;
    int x=1;
    printf("ROWS:");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for (int j=1;j<=3;j++){
            printf(" %d",x);
            x++;

        }
        x=x-2;
        printf("\n");
    }
}
/*
ROWS:3
 1 2 3
 2 3 4
 3 4 5
 */