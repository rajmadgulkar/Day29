#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){\
    int x=1;
    char ch='A';
        for(int j=5;j>=i;j--){
            if(j%2==0){
                printf(" %d",x);
                x++;
            }
            else{
                printf(" %c",ch);
                ch++;
            }

            
        }
        printf("\n");
    }
}
/*
 A 1 B 2 C
 A 1 B 2
 A 1 B
 A 1
 A
*/