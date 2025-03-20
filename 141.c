#include<stdio.h>


int arr[] = {1,2,3,4,5,6,7,8};
#define SIZE (sizeof(ar) / sizeof(int))

int main(){


    printf("%d" , SIZE);
    if (-1 <= SIZE)
    printf("1");
    else
    printf("2");







    return 0 ;
}