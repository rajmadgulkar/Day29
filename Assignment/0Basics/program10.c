#include <stdio.h>
void main(){

    char var;
    printf("Enter character:");
    scanf("%c",&var);
    
    if(var=='A'||var=='E'||var=='I'||var=='O'||var=='U'){
    printf("%c is a vowel",var);

}else{
    printf("%c is a consonant",var);
}

}

// Enter character:A
// A is a vowel
// Enter character:D
// D is a consonant