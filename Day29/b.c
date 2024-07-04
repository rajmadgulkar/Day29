#include<stdio.h>

void fun(int ,int );

void main(){

    int x ,y;
    printf("Enter values of x & y:");
    scanf("%d %d",&x,&y);

    printf("x= %p\n",&x);
    printf("y= %p\n",&y);


    fun(x,y);
    printf("x= %p\n",&x);
    printf("y= %p\n",&y);
    
    

}
void fun(int x,int y){
    printf("%d\n",x+y);

    printf("x= %p\n",&x);
    printf("y= %p\n",&y);


}
/*
Enter values of x & y:10 20
x= 0x7ffdecef96d0
y= 0x7ffdecef96d4
30
x= 0x7ffdecef96bc
y= 0x7ffdecef96b8
x= 0x7ffdecef96d0
y= 0x7ffdecef96d4
*/