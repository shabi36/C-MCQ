#include<stdio.h>
int main(){

 int i = 10;
 static int x = i;

 if (x == i)
 printf("1");

 else if (x > i)
 printf("2");

 else
 printf("3");

    return 0 ;
}