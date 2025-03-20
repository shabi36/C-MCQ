#include<stdio.h>
int main(){

int a[5] = {1,3,5,7,9};
int *ptr = (int*)(&a + 1);
printf("%d" , *(a+1));
printf("%d" , *(ptr-2));
    return 0 ;
}