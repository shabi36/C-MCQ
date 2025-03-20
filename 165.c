#include <stdio.h>

int main() {
int a = 5, b = 0, c = -5;

if (a-- && (b = 10) && c++) {
printf("Condition Met,");
} else {
printf("Condition Failed,");
}

printf("a = %d, b = %d, c = %d\n", a, b, c);
return 0;
}
