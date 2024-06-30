#include <stdio.h>
void main(){
    int rows;
    int cols;
    printf("ROWS:");
    scanf("%d",&rows);
    printf("Col:");
    scanf("%d",&cols);

    int x=1;
    char ch='a';
    for (int i=0; i<rows;i++){
        for(int j=0; j<cols;j++){
            if (i%3==0){
                printf(" %d",x);
                x++;
            }else if(i%3==1){
                printf(" %c",ch);
                ch++;
            }else{
                printf(" #");
            }
        }
        printf("\n");
    }
}
/*
ROWS:6
Col:4
 1 2 3 4
 a b c d
 # # # #
 5 6 7 8
 e f g h
 # # # #
 */