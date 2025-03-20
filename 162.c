#include <stdio.h>

int main() {
char str[] = "Hello";
int *p = (int*)str;

printf("%d\n", *p);
return 0;
}
