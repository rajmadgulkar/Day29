#include <stdio.h>
void main(){
char userData;
printf("Enter character\n");
scanf("%c",&userData);
printf("Entered Character=%c\n",userData);

if(userData>='A'&& userData<='Z'){
printf("Entered character is UPPERCASE");
}
else{
printf("Entered character is LOWERCASE");
}
}