#include <stdio.h>
int main() {
int x = 5, y = 10;
int *p = &x, *q = &y;
p = q;
*p = 20;
printf("%d %d", x, y);
return 0;
}
