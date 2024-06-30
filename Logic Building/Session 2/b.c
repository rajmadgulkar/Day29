#include<stdio.h>
int main(){
    char ch;
    printf("Input:");
    scanf("%c",&ch);
    
    if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
        printf("%c is an alphabet.\n",ch);
    }else if(ch>='0'&&ch<='9'){
        printf("%c is a digit.\n",ch);
        }
    else{
        printf("%c is a special character.\n",ch);

    }
}
/*
Input:C
C is an alphabet.
Input:n
n is an alphabet.
Input:5
5 is a digit.
Input:*
* is a special character.
*/