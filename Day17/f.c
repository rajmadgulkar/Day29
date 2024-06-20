#include<stdio.h>
void main(){
    int x=5;
    int *ptr1=&x;
    int *ptr2=x;

    printf("%p\n",ptr1);
    printf("%p\n",ptr2);

    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);//Segmentation fault(core dump)
 
    printf("End Main");// Not executed after segmentation fault

}