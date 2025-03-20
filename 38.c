#include<stdio.h>
int main(){

int p = -1 , q = -2 , r;
r = p++ * ++q;
printf("%d %d %d" , p , q , r);
    return 0 ;
}