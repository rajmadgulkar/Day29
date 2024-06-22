#include <stdio.h>
void main(){
    int var;
    printf("Input: var=");
    scanf("%d",&var);

    if (var%2==0){
        printf("%d is an even no\n",var);
    }else{
        printf("%d is an odd no\n",var);
    }
}

// Input: var=10
// 10 is an even no
// Input: var=37
// 37 is an odd no