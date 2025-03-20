#include <stdio.h>

int main() {
int a = 0, b = 5, c = 10;

if (a && ++b && c) {
printf("Condition is True\n");
} else {
printf("Condition is False\n");
}

printf("b = %d\n", b);
return 0;
}
