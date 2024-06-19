#include <stdio.h>
void main(){
    int arr1[5]={10,20,30,40,50};

    int x=50;
    char ch ='A';

    printf("%d\n",x);
    printf("%c\n",ch);

    printf("%p\n",&x);
    printf("%p\n",&ch);

    printf("%p\n",arr1);
    //printf("%c\n",&arr1);wrong way to address the array

}
