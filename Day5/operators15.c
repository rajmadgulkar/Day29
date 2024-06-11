#include <stdio.h>
int main(){
    // int x=10,20,30;
    // printf("%d\n",int);

    int y={10,20,30};// Warning:Scalar initialization Prints first value i.e 10
    printf("%d\n",y);

    int z=(10,20,30);// comma operators prints the last value i.e 30
    printf("%d\n",z);
}