#include <stdio.h>
void main(){
    char var;
    printf("Enter character:");
    scanf("%c",&var);

    if (var>='A'&& var<='Z'){
        printf("You entered an UPPERCASE character\n");
    }else if(var>='a'&&var<='z'){
        printf("You entered an lowercase character\n");
    }
}

// Enter character:A
// You entered an UPPERCASE character
// Enter character:a
// You entered an lowercase character