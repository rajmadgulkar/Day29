#include<stdio.h>
void main(){
    int x=10;
    char ch='A';
    float f=20.01;
    double d=89.2154;

    void *arr[]={&x,&ch,&f,&d};

    printf("%p\n",arr[0]);
    printf("%p\n",arr[1]);
    printf("%p\n",arr[2]);
    printf("%p\n",arr[3]);

    printf("%d\n",*(int*)arr[0]);
    printf("%c\n",*(char*)arr[1]);
    printf("%f\n",*(float*)arr[2]);
    printf("%lf\n",*(double*)arr[3]);

}
/*
0000009e645ffdec
0000009e645ffdeb
0000009e645ffde4
0000009e645ffdd8
10
A
20.010000
89.215400
*/