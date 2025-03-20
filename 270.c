#include<stdio.h>
int main(){

int i , j = 2;
if ( i && (!(i&j)) == 1)
printf("%d" , i);
else
printf("%d" , j);
    return 0 ;
}