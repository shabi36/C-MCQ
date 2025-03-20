#include<stdio.h>
int main(){

int a[3][2] = {{1,2}, {3,4} ,{5,6}};
printf("%d %d %d" , a[2][1] , *(a[2]+1) , *((a+2)+1));
    return 0 ;
}