#include<stdio.h>
int main(){

int a[] = {1,5};
printf("%d" , *a);
(*a)++;
printf("%d" , *a);
    return 0 ;
}