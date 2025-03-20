#include<stdio.h>
int main(){

   int i = 0 , j = 0;

   if (i && (j = i + 10))
printf("hello");
else
printf("hi");

printf("%d %d" , i  , j);
    return 0 ;
}