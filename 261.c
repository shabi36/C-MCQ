#include<stdio.h>
int main(){
char *p = "csegurus";
int *q;
p++;
q = (int*)p;
q++;
printf("%s %s" , p , q);
    return 0 ;
}