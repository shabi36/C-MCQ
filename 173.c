#include <stdio.h>
void foo(int *p) {
*p += 5;
p = NULL;
}
int main() {
int x = 10;
foo(&x);
printf("%d", x);
return 0;
}