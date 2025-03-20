#include<stdio.h>
int main(){


   char a[] = "hello";
   char *p ;
   p =a;

   printf("%d %d %d %d" , sizeof(a) , sizeof(p) ,strlen(a) , strlen(p));
    return 0 ;
}