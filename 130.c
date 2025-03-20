#include<stdio.h>
int main(){

int i = 5 ;
printf("%d %d" , i ,++i);
printf("%d" , i);
i = i++;
printf("%d" , i);
    return 0 ;
}