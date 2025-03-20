#include<stdio.h>
#define CUBE(x) x*x*x
int main(){

int ans = 216/CUBE(3);
printf("%d" , ans);
    return 0 ;
}