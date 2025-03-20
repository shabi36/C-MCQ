#include<stdio.h>
#include<string.h>
int main(){

char a[] = "shabi";
char *p;
p = a;

printf("%d %d %d %d" , sizeof(a) , sizeof(p) , strlen(a) , strlen(p));
    return 0 ;
}