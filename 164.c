#include <stdio.h>

int main() {
int a = 1, b = 2, c = 3;

if (a ^ b && b ^ c) {
printf("XOR works!\n");
} else {
printf("No XOR\n");
}

return 0;
}
