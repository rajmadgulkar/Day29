//Code1
#include <stdio.h>
int a=10;//Global variable
void fun(){
    int b=20;//Local variable
    printf("In fun\n");
}
void main(){
    int c=30;//Local variable
    printf("Start main\n");
    fun();//call to the fun function
    printf("End main\n");
}