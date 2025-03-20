#include <stdio.h>
int main() {
int a = 5, b = 7, c = 0;
c = (a & b) + (a | b);
printf("%d", c);
return 0;
}
