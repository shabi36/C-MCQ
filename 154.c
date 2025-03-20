#include<stdio.h>
int main(){

int fact = 1 , i , n;
n = 5;
for(i = n ; i >= 0 ; i--)
fact = fact*i;
printf("%d" , fact);

    return 0 ;
}