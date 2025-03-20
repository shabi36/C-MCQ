#include<stdio.h>
int main(){

int a = 3;
int r = a++ + ++a + a++ + ++a;
printf("%d" , r);
    return 0 ;
}