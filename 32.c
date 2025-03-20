#include<stdio.h>
int main(){

int h = 15 , s = 4;

h = h + s - (h = s);

printf("%d %d" , h,s);

    return 0 ;
}