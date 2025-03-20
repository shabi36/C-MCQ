#include<stdio.h>
int main(){
int a[] = {10,20,30,40,50};
int *aptr[] = {a , a+1 , a+2 , a+3 , a+4};
int *dptr = aptr + 2;
printf("%d %d" , dptr - aptr , aptr[4]-a);
    return 0 ;
}