#include<stdio.h>
int main(){

extern int x ;
x = 20;
printf("%d" , sizeof(x));
    return 0 ;
}