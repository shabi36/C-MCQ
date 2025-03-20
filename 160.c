#include <stdio.h>

int main() {
enum { A = 5, B, C = 10, D };
printf("%d %d %d %d\n", A, B, C, D);
return 0;
}
