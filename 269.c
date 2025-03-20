#include<stdio.h>
int main(){

register int i = 10;
int *q = &i;
*q = 11;
printf("%d %d" , i , *q);
    return 0 ;
}