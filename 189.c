#include<stdio.h>

int func(int i){
   if (i%2 == 0)
   return (0);
   else
   return (1);
}


int main(){

int i = 3;
i = func(i);
i = func(i);
printf("%d" , i);
    return 0 ;
}