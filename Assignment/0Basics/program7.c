#include <stdio.h>
void main(){
    int var;
    printf("Input: var=");
    scanf("%d",&var);

    if (var>=10){
        printf("%d is greater than 10.\n",var);
    }else{
        printf("%d is less than 10.\n",var);
    }
}


// Input: var=5
// 5 is less than 10.
// Input: var=16
// 16 is greater than 10.