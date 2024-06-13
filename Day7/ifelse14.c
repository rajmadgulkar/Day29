#include <stdio.h>
void main(){

char ch;

printf("Are you alive?\n");
printf("Enter Y or N\n");

scanf("%c\n",&ch);

if(ch=='Y' || ch=='y'){
printf("Ok, Hope you must be safe\n");
}
else{
printf("We will be there for your help\n");
}
}