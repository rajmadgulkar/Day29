#include<stdio.h>
void main(){
    int rows;
    char ch='d';
    
    printf("ROWS:");
    scanf("%d",&rows);

    for (int i=rows; i>=1;i--){
        for(int j=1;j<=rows;j++){
            printf(" %c",ch);
           

        }
        ch--;

        printf("\n");
    }
}
/*
ROWS:4
 d d d d
 c c c c
 b b b b
 a a a a
 */