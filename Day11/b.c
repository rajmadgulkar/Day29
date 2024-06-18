#include<stdio.h>
void main(){
        int x;
        int rem;

        printf("Enter the number\n");
        scanf("%d",&x);

        while(rem!=0){
                rem=x%10;
                printf("%d ",rem);
                x=x/10;
        }
}