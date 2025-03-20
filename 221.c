#include<stdio.h>
int main(){

static int val  = 5;
printf("%d" , val--);
if(val)
main();
    return 0 ;
}