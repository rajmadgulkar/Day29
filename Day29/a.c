#include<stdio.h>

void fun(int ,int );

void main(){

    int x ,y;
    printf("Enter values of x & y:");
    scanf("%d %d",&x,&y);

    fun(x,y);

}
void fun(int x,int y){
    printf("%d\n",x+y);

}
/*
Enter values of x & y:5 15
20
*/