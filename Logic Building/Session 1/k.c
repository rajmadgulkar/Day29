#include<stdio.h>
void main(){
    int rows;
    int x=1;
    char ch='a';
    printf("ROWS:");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for (int j=1;j<=rows;j++){
            if(i%2==0){
                printf(" %c",ch);
                ch++;
            }
            else{
                printf(" %d",x);
                x++;

            }
        }
        printf("\n");
    }

}
/*
ROWS:4
 1 2 3 4
 a b c d
 5 6 7 8
 e f g h
 */