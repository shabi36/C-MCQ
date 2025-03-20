#include<stdio.h>
int main(){


int a = 10 , b ;
if (a == a--)
printf("true");
printf("%d" , a);
a = 10;
if (a == --a)
printf("false");
printf("%d" , a);



    return 0 ;
}