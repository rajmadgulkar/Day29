#include<stdio.h>

int  retval(int);
void main(){

    int x=10;
    int ret =retval(x);

    printf("%d\n",ret);//40


}
int retval(int x){

    int y=x+10;
    int z=y+20;
    return x,y,z;
}
