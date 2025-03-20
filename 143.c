#include<stdio.h>
# define MAX 2
enum bird {SPARROW  = MAX + 1 , PARROT = MAX};

int main(){


enum birb b = PARROT;
printf("%d" , b);
    return 0 ;
}