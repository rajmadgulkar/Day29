#include <stdio.h>
void main(){
    int y={10,20,30};
    printf("%p\n",&y);//00000002e47ff758

    int z={10,20,30};
    printf("%p\n",&z);//00000002e47ff75c

}
//Virtual address I got during the code