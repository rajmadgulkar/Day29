#include <stdio.h>
void main(){
    int var;
    printf("Input:");
    scanf("%d",&var);

    if (var>0){
        printf("%d is a positive number\n",var);
    }else if(var<0){
        printf("%d is a negative number\n",var);
    }
}

// Input:5
// 5 is a positive number
// Input:-9
// -9 is a negative number