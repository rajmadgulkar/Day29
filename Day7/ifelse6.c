#include <stdio.h>
void main(){

int x=10;
char ch1='A';
char ch2=97;
char ch3=128;

printf("%d\n",x);//10
printf("%c\n",ch1);//A
printf("%c\n",ch2);//a
printf("%c\n",ch3);//-128 as %d is used here and the range moves in loop.
}