#include<stdio.h>
void main(){
    char ch='a';
    int rows;
    printf("Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }
}
/*
Rows:3
 a b c
 d e f
 g h i
 */