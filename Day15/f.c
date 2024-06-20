#include<stdio.h>
void main(){
    char arr[4];

    arr[0]='A';
    arr[1]='B';
    arr[2]='C';
    arr[3]='D';

    printf("%c",arr[0]);
    printf("%c",arr[1]);
    printf("%c",arr[2]);
    printf("%c",arr[3]);


    printf("%c",arr[4]);// Out of array prints random character


}