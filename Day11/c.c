#include <stdio.h>
void main(){
        int x;
        int rem;

        printf("Enter number\n");
        scanf("%d",&x);
        while(x!=0){

                rem=x%10;
                printf("%d\n",x*5);

                x=x/10;
        }
}