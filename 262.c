#include<stdio.h>
int main(){

int  i = 5 , *ptr ;
ptr = &i;
*ptr = 0;
printf("%d" , i);
    return 0 ;
}