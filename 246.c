#include<stdio.h>
int main(){

int a = 10 , b = 2 , c;
a = !(a+b--) && ++b;
c += (a+ b --);
printf("%d %d %d" , b,c,a);
    return 0 ;
}