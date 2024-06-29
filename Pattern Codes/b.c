#include <stdio.h>
void main(){
        for(int i=1;i<=5;i++){
                int x=1;
                char ch='A';
                for(int j=1; j<=i;j++){
                        if(j%2==0){
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
 1
 1 A
 1 A 2
 1 A 2 B
 1 A 2 B 3
 */