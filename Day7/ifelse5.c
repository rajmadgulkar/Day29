#include <stdio.h>
void main(){

int x=10;
char ch1='A';
char ch2=97;
char ch3=128;

printf("%d\n",x);//10
printf("%c\n",ch1);//A
printf("%c\n",ch2);//a
printf("%c\n",ch3);//� 
//undefined character as range from -128 to 127 & 128 will print -128 as goes in loop.
//b'coz of %c it is undefined here
}