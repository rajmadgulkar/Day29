#include <stdio.h>
void main(){
printf("Start main\n");

char ch1='A';
char ch2='48';

if (ch1){
printf("In first if block\n");
}

printf("%c\n",ch2);// 8 It is taking 8 as input to the second if block

if (ch2){
printf("In second if block\n");
}

printf("End main\n");

}